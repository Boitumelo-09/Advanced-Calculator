# Calculator Program in C++

## Overview
This is a simple calculator application written in C++ that can perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The program is designed for both beginner programmers learning C++ and users who need a lightweight command-line calculator.

## Features
- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers (with error handling for division by zero)
- Quadratic Calculations
- Slope Calculations
- Temperature Conversions
- Area Of Circle Calculator
- User-friendly menu interface

## How It Works
The program displays a menu for the user to choose an operation. Once an operation is selected, the user is prompted to input two numbers, and the result is displayed. The program can handle invalid inputs and allows the user to perform multiple calculations in a single session.

## Requirements
- A C++ compiler (e.g., GCC, Clang, or Visual Studio)
- Basic understanding of how to use the command line or terminal

## Getting Started
1. Clone the repository or download the source code file:
   ```bash
   git clone https://github.com/Boitumelo-09/calculator.git
   cd calculator
   ```

2. Compile the program:
   ```bash
   g++ calculator.cpp -o calculator
   ```

3. Run the program:
   ```bash
   ./calculator
   ```

## Example Usage
### Program Output:
```
Welcome to the C++ Calculator!

Select an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Result: 5 + 3 = 8

Do you want to perform another calculation? (y/n): y
```

## File Structure
- `calculator.cpp`: Main source code file for the calculator

## Error Handling
- The program checks for invalid inputs (e.g., non-numeric entries).
- Division by zero is handled gracefully, with an appropriate error message.

## Future Improvements
- Add support for advanced mathematical operations (e.g., square roots, exponents).
- Include trigonometric functions (sin, cos, tan).
- Implement a graphical user interface (GUI).

## Contributing
Contributions are welcome! If you have any suggestions or improvements, feel free to fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author
Boitumelo Clement Mkhondo  
GitHub: [Boitumelo-09](https://github.com/Boitumelo-09)

