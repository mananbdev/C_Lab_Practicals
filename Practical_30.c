/* Write a program in C to store the information of five employees using both concepts i.e. array of structure and array within structure. */
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
    int scores[3];
};

void inputEmployee(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter 3 performance scores: ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &emp[i].scores[j]);
        }
    }
}

float averageScore(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += scores[i];
    return (float)sum / n;
}

void displayEmployees(struct Employee emp[], int n) {
    printf("\n%-5s %-15s %-5s %-10s %-20s %-10s\n",
           "ID", "Name", "Age", "Salary", "Scores", "Avg Score");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-5d %-10.2f",
               emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
        printf(" [%d, %d, %d]%-9s",
               emp[i].scores[0], emp[i].scores[1], emp[i].scores[2], "");
        printf(" %-10.2f\n", averageScore(emp[i].scores, 3));
    }
}

int main() {
    struct Employee emp[5];
    int n = 5;

    inputEmployee(emp, n);
    displayEmployees(emp, n);

    return 0;
}