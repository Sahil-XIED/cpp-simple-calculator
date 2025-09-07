# Simple C++ Calculator

A beginner-friendly command-line calculator application built in C++ that performs basic arithmetic operations with error handling and user-friendly interface.

## 📋 Table of Contents
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Learning Objectives](#learning-objectives)
- [Example Usage](#example-usage)
- [Error Handling](#error-handling)
- [Contributing](#contributing)
- [License](#license)

## ✨ Features

- **Basic Arithmetic Operations**: Addition, Subtraction, Multiplication, Division
- **User-Friendly Interface**: Clear prompts and formatted output
- **Error Handling**: Division by zero protection and invalid operator detection
- **Continuous Operation**: Option to perform multiple calculations
- **Clean Output**: Formatted results with 2 decimal places
- **Cross-Platform**: Works on Windows, macOS, and Linux

## 🔧 Requirements

- C++ compiler (g++, clang++, or Visual Studio)
- C++11 or later
- Standard C++ library

## 🚀 Installation

1. **Clone or Download**
   ```bash
   git clone <repository-url>
   cd simple-cpp-calculator
   ```

2. **Compile the Program**
   
   **Using g++:**
   ```bash
   g++ -o calculator calculator.cpp
   ```
   
   **Using clang++:**
   ```bash
   clang++ -o calculator calculator.cpp
   ```
   
   **Using Visual Studio (Windows):**
   - Open Visual Studio
   - Create new C++ console application
   - Replace the default code with calculator.cpp content
   - Build and run (Ctrl+F5)

3. **Run the Program**
   ```bash
   ./calculator
   ```
   
   **On Windows:**
   ```cmd
   calculator.exe
   ```

## 💻 Usage

1. Launch the calculator
2. Enter your first number when prompted
3. Choose an operator (+, -, *, /)
4. Enter your second number
5. View the result
6. Choose whether to perform another calculation (y/n)

## 🏗️ Code Structure

```cpp
main()
├── Welcome message and menu display
├── do-while loop (main calculator loop)
│   ├── Input collection (num1, operator, num2)
│   ├── switch statement for operations
│   │   ├── case '+': Addition
│   │   ├── case '-': Subtraction  
│   │   ├── case '*': Multiplication
│   │   ├── case '/': Division (with zero check)
│   │   └── default: Error handling
│   └── Continue prompt
└── Farewell message
```

## 🎯 Learning Objectives

This project helps beginners practice:

- **Variables and Data Types**: `double`, `char`
- **Input/Output Operations**: `std::cin`, `std::cout`
- **Conditional Statements**: `switch`, `if-else`
- **Loops**: `do-while`
- **Error Handling**: Input validation and edge cases
- **Code Organization**: Clean, readable structure
- **Formatting**: Output presentation with `std::setprecision()`

## 📖 Example Usage

```
========================================
        Welcome to Simple Calculator    
========================================
Supported operations:
  + : Addition
  - : Subtraction
  * : Multiplication
  / : Division
========================================

Enter first number: 15.5
Enter operator (+, -, *, /): *
Enter second number: 2.4

15.50 * 2.40 = 37.20

Do you want to perform another calculation? (y/n): y

Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 0

Error: Division by zero is not allowed!

Do you want to perform another calculation? (y/n): n

========================================
   Thank you for using the calculator!  
========================================
```

## ⚠️ Error Handling

The calculator handles the following error conditions:

1. **Division by Zero**
   - Input: `10 / 0`
   - Output: `Error: Division by zero is not allowed!`

2. **Invalid Operator**
   - Input: `5 ^ 2`
   - Output: `Error: Invalid operator '^'. Please use +, -, *, or /`

3. **Invalid Number Input**
   - The program will prompt for re-entry if non-numeric input is provided

## 🛠️ Customization Options

You can easily modify the calculator to:

- Add more operations (modulus, power, etc.)
- Change decimal precision
- Add input validation for numbers
- Implement scientific notation
- Add memory functions (store/recall)

## 🤝 Contributing

Contributions are welcome! Here are some ideas for enhancements:

- Add more mathematical operations
- Implement expression parsing (e.g., "5 + 3 * 2")
- Add a graphical user interface
- Include unit tests
- Add command-line arguments support

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🔗 Additional Resources

- [C++ Reference](https://cppreference.com/)
- [C++ Tutorial for Beginners](https://www.learncpp.com/)
- [C++ Compiler Installation Guide](https://code.visualstudio.com/docs/cpp/config-linux)

---

**Author**: Mohammed Sahil
