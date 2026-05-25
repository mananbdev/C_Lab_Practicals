# C Programming Practicals Repository

A comprehensive collection of C programming practical assignments completed as part of the **Fundamentals of C Programming (24CSE0107)** course during my **B.E. CSE 1st Year, Semester 2**.

## 📋 Table of Contents

- [About](#-about)
- [Repository Structure](#-repository-structure)
- [Course Information](#-course-information)
- [Practical List](#-practical-list)
- [Topics Covered](#-topics-covered)
- [How to Use](#-how-to-use)
- [Compilation and Execution](#️-compilation-and-execution)
- [Learning Outcomes](#-learning-outcomes)
- [Contributing](#-contributing)
- [Author](#-author)

## 📖 About

This repository contains 31 practical programs covering fundamental concepts of C programming language. Each practical is designed to reinforce theoretical concepts through hands-on coding experience, from basic I/O operations to advanced topics like file handling and data structures.

## 📁 Repository Structure

```
C-program-/
├── C Practical/
│   ├── Practical_1.c          # Hello World & IDE Setup
│   ├── Practical_2.c          # Input/Output & stdio.h
│   ├── Practical_3.c          # Addition of two numbers
│   ├── Practical_4.c          # Circle area & circumference
│   ├── Practical_5.c          # Basic arithmetic operations
│   ├── Practical_6.c          # Mathematical equations
│   ├── Practical_7_a.c        # Swap using temp variable
│   ├── Practical_7_b.c        # Swap without temp variable
│   ├── Practical_8.c          # Greatest of three numbers
│   ├── Practical_9.c          # Switch case programs
│   ├── Practical_10.c         # Sum of first n natural numbers
│   ├── Practical_11.c         # Armstrong number checker
│   ├── Practical_12.c         # Digit counter & reverse
│   ├── Practical_13.c         # Fibonacci series
│   ├── Practical_14_a.c       # Star pattern (left-aligned)
│   ├── Practical_14_b.c       # Star pattern (right-aligned)
│   ├── Practical_15.c         # Multiplication table pattern
│   ├── Practical_16.c         # Prime, Armstrong, Perfect checker
│   ├── Practical_17.c         # Circle calculations (functions)
│   ├── Practical_18.c         # Call by value vs reference
│   ├── Practical_19.c         # 1D Array operations
│   ├── Practical_20.c         # Array sum using functions
│   ├── Practical_21.c         # Pointer as function arguments
│   ├── Practical_22.c         # Matrix multiplication
│   ├── Practical_23.c         # Matrix transpose
│   ├── Practical_24.c         # Factorial using recursion
│   ├── Practical_25.c         # String functions
│   ├── Practical_26.c         # Substring counter
│   ├── Practical_27.c         # Sum of digits (recursion)
│   ├── Practical_28.c         # Distance addition (structures)
│   ├── Practical_29.c         # Complex number addition
│   ├── Practical_30.c         # Employee records
│   └── Practical_31.c         # File handling - find & replace
└── README.md
```

## 🎓 Course Information

- **Course Name:** Fundamentals of C Programming
- **Course Code:** 24CSE0107
- **Program:** B.E. Computer Science and Engineering
- **Year:** 1st Year
- **Semester:** 2
- **Total Practicals:** 31

## 📝 Practical List

| S.No | File Name | Description | CLO |
|------|-----------|-------------|-----|
| - | GitHub Setup | Discussion on uploading and managing practicals on GitHub | CLO-01 |
| 1 | `Practical_1.c` | Install C compiler, IDE setup, Hello World program | CLO-01 |
| 2 | `Practical_2.c` | Input/Output statements & block structure with stdio.h | CLO-01 |
| 3 | `Practical_3.c` | Add two numbers and display sum | CLO-02 |
| 4 | `Practical_4.c` | Calculate area and circumference of a circle | CLO-02 |
| 5 | `Practical_5.c` | Arithmetic operations (add, subtract, multiply, divide) | CLO-02 |
| 6 | `Practical_6.c` | Evaluate mathematical equations (V=u+at, S=ut+½at², etc.) | CLO-02 |
| 7a | `Practical_7_a.c` | Swap two variables using temporary variable | CLO-02 |
| 7b | `Practical_7_b.c` | Swap two variables without temporary variable | CLO-02 |
| 8 | `Practical_8.c` | Find greatest among three numbers (conditional operator & if-else) | CLO-03 |
| 9 | `Practical_9.c` | Switch case: vowel/consonant checker & positive/negative/zero | CLO-03 |
| 10 | `Practical_10.c` | Sum of first n natural numbers using while loop | CLO-03 |
| 11 | `Practical_11.c` | Check Armstrong number using for loop | CLO-03 |
| 12 | `Practical_12.c` | Count digits in a number and print reverse | CLO-03 |
| 13 | `Practical_13.c` | Generate Fibonacci series | CLO-03 |
| 14a | `Practical_14_a.c` | Print star pattern (left-aligned triangle) | CLO-03 |
| 14b | `Practical_14_b.c` | Print star pattern (right-aligned triangle) | CLO-03 |
| 15 | `Practical_15.c` | Print multiplication table pattern | CLO-03 |
| 16 | `Practical_16.c` | Check prime, Armstrong, or perfect number using functions | CLO-03 |
| 17 | `Practical_17.c` | Calculate circle area & circumference using functions | CLO-04 |
| 18 | `Practical_18.c` | Swap variables using call by value and call by reference | CLO-04 |
| 19 | `Practical_19.c` | 1D Array operations: Insert, Update, Delete, Display, Search | CLO-05 |
| 20 | `Practical_20.c` | Calculate sum of array elements by passing to function | CLO-04 |
| 21 | `Practical_21.c` | Passing pointers as arguments to functions | CLO-04 |
| 22 | `Practical_22.c` | Matrix multiplication using 2D arrays | CLO-05 |
| 23 | `Practical_23.c` | Transpose a given matrix | CLO-05 |
| 24 | `Practical_24.c` | Factorial calculation using recursion | CLO-05 |
| 25 | `Practical_25.c` | Menu-driven program for string functions (strlen, strcat, strcpy, strcmp, strrev) | CLO-05 |
| 26 | `Practical_26.c` | Count total appearances of substring in a string | CLO-05 |
| 27 | `Practical_27.c` | Sum of digits using recursion | CLO-05 |
| 28 | `Practical_28.c` | Add two distances (inch & feet) using structures | CLO-05 |
| 29 | `Practical_29.c` | Add two complex numbers using structures | CLO-05 |
| 30 | `Practical_30.c` | Store employee information (array of structures & array within structure) | CLO-05 |
| 31 | `Practical_31.c` | Find and replace specific string in file, count appearances | CLO-06 |

## 🎯 Topics Covered

### Basics (CLO-01, CLO-02)
- IDE Setup and Compilation
- Input/Output Operations (`scanf`, `printf`)
- Data Types and Variables
- Arithmetic Operations
- Mathematical Expressions

### Control Structures (CLO-03)
- Conditional Statements (`if-else`, conditional operator)
- Switch-Case Statements
- Loops (`while`, `for`, `do-while`)
- Pattern Printing
- Number Series (Fibonacci, Armstrong, Prime, Perfect)

### Functions (CLO-04)
- Function Declaration and Definition
- Parameter Passing
- Call by Value vs Call by Reference
- Function with Pointers

### Advanced Concepts (CLO-05, CLO-06)
- Arrays (1D and 2D)
- Array Operations (CRUD)
- Pointers
- Recursion
- Strings and String Manipulation
- Structures
- Array of Structures
- File Handling
- File I/O Operations

## 🚀 How to Use

### Prerequisites
- C Compiler (GCC recommended)
- Text Editor or IDE (VS Code, Code::Blocks, Dev-C++, etc.)
- Basic understanding of C programming

### Clone the Repository
```bash
git clone https://github.com/mananbdev-dev/C-program-.git
cd C-program-/C\ Practical/
```

## ⚙️ Compilation and Execution

### Using GCC (Linux/Mac/Windows with MinGW)

**Compile:**
```bash
gcc Practical_1.c -o Practical_1
```

**Run:**
```bash
# Linux/Mac
./Practical_1

# Windows
Practical_1.exe
```

### Using Code::Blocks
1. Open Code::Blocks
2. File → Open → Select the `.c` file
3. Build → Build and Run (or press F9)

### Using VS Code
1. Install C/C++ extension
2. Open the file
3. Configure tasks.json for building
4. Press `Ctrl+Shift+B` to build
5. Run from terminal

### Using Online Compilers
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Programiz C Compiler](https://www.programiz.com/c-programming/online-compiler/)
- [JDoodle](https://www.jdoodle.com/c-online-compiler)

## 📚 Learning Outcomes

By completing these practicals, students will be able to:

- **CLO-01:** Understand C programming environment setup and basic syntax
- **CLO-02:** Implement basic arithmetic operations and expressions
- **CLO-03:** Apply control structures and develop algorithmic thinking
- **CLO-04:** Design modular programs using functions
- **CLO-05:** Utilize arrays, pointers, strings, structures, and recursion
- **CLO-06:** Perform file handling operations

## 🤝 Contributing

While this is a personal academic repository, contributions are welcome for:
- Bug fixes
- Code optimization suggestions
- Better algorithm implementations
- Documentation improvements

Feel free to:
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/improvement`)
3. Commit your changes (`git commit -m 'Add improvement'`)
4. Push to the branch (`git push origin feature/improvement`)
5. Open a Pull Request

## 📖 Resources

### Online Resources
- [GeeksforGeeks - C Programming](https://www.geeksforgeeks.org/c-programming-language/)
- [Learn-C.org](https://www.learn-c.org/)

## 📄 License

This project is created for educational purposes as part of college curriculum.

## 👨‍💻 Author

**mananbdev**  
B.E. Computer Science and Engineering  
1st Year, Semester 2  
Course: Fundamentals of C Programming (24CSE0107)

---

### 📌 Note

These programs are created as part of academic practical assignments. Code may be updated and improved over time as learning progresses.

### ⭐ Show Your Support

If you found this repository helpful, please consider giving it a star! It helps others discover these resources.

---

**Last Updated:** February 2026
