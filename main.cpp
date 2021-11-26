#include <iostream>
#include "std_lib_facilities.h"

/**
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yeshwanth Mandava
 */

int main() {
    cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) and 2 operands (numbers):  ";
    string operation{""};
    double operand1{};
    double operand2{};
    cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus") {
        cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << '\n';
    } else if (operation == "-" || operation == "minus") {
        cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << '\n';
    } else if (operation == "*" || operation == "mul") {
        cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << '\n';
    } else if (operation == "/" || operation == "div") {
        cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << '\n';
    } else
    {
        cout << "Sorry the operation or operand you entered is invalid.";
    }     return 0;
}
