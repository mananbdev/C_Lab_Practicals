#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int countOccurrences(const char *line, const char *search) {
    int count = 0;
    const char *ptr = line;
    while ((ptr = strstr(ptr, search)) != NULL) {
        count++;
        ptr += strlen(search);
    }
    return count;
}

void replaceLine(char *result, const char *line, const char *search, const char *replace) {
    const char *ptr = line;
    const char *found;
    result[0] = '\0';

    while ((found = strstr(ptr, search)) != NULL) {
        strncat(result, ptr, found - ptr);
        strcat(result, replace);
        ptr = found + strlen(search);
    }
    strcat(result, ptr);
}

int main() {
    char filename[100], search[100], replace[100];
    char line[MAX_LINE], newLine[MAX_LINE * 2];
    int totalCount = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("Enter string to search: ");
    scanf("%s", search);
    printf("Enter string to replace with: ");
    scanf("%s", replace);

    FILE *temp = fopen("temp_file.txt", "w");
    if (temp == NULL) {
        printf("Error: Could not create temporary file.\n");
        fclose(fp);
        return 1;
    }

    printf("\n--- Original File Content ---\n");
    while (fgets(line, MAX_LINE, fp)) {
        printf("%s", line);
    }
    rewind(fp);

    while (fgets(line, MAX_LINE, fp)) {
        totalCount += countOccurrences(line, search);
        replaceLine(newLine, line, search, replace);
        fputs(newLine, temp);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp_file.txt", filename);

    printf("\n--- Updated File Content ---\n");
    fp = fopen(filename, "r");
    while (fgets(line, MAX_LINE, fp)) {
        printf("%s", line);
    }
    fclose(fp);

    printf("\nTotal occurrences of \"%s\" found and replaced: %d\n", search, totalCount);

    return 0;
}