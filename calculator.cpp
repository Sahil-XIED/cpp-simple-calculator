#include <iostream>
#include <iomanip>

int main() {
    // Variables to store user input
    double num1, num2;
    char op;
    char choice;
    
    // Welcome message
    std::cout << "========================================\n";
    std::cout << "        Welcome to Simple Calculator    \n";
    std::cout << "========================================\n";
    std::cout << "Supported operations:\n";
    std::cout << "  + : Addition\n";
    std::cout << "  - : Subtraction\n";
    std::cout << "  * : Multiplication\n";
    std::cout << "  / : Division\n";
    std::cout << "========================================\n\n";
    
    // Main calculator loop
    do {
        // Get user input
        std::cout << "Enter first number: ";
        std::cin >> num1;
        
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;
        
        std::cout << "Enter second number: ";
        std::cin >> num2;
        
        std::cout << "\n";
        
        // Perform calculation based on operator
        switch(op) {
            case '+':
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
                break;
                
            case '-':
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
                break;
                
            case '*':
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
                break;
                
            case '/':
                if (num2 == 0) {
                    std::cout << "Error: Division by zero is not allowed!" << std::endl;
                } else {
                    std::cout << std::fixed << std::setprecision(2);
                    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
                }
                break;
                
            default:
                std::cout << "Error: Invalid operator '" << op << "'. Please use +, -, *, or /" << std::endl;
                break;
        }
        
        std::cout << "\n";
        
        // Ask if user wants to continue
        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;
        std::cout << "\n";
        
    } while (choice == 'y' || choice == 'Y');
    
    // Farewell message
    std::cout << "========================================\n";
    std::cout << "   Thank you for using the calculator!  \n";
    std::cout << "========================================\n";
    
    return 0;
}