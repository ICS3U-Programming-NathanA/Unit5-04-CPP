// Copyright (c) 2022 Nathan Araujo All rights reserved.
// .
// Created by: Nathan Araujo
// Date : Nov.30, 2022
// This program is a calculator that calculates the users nums
// using different signs that the user enters

#include <math.h>
#include <iostream>

double Calculate(double userNum1, double userNum2, char sign) {
    // Switch case to determine what sign to use
    switch (sign) {
        case '+':
            return userNum1 + userNum2;

        case '-':
            return userNum1 - userNum2;

        case '*':
            return userNum1 * userNum2;

        case '/':
            return userNum1 / userNum2;

        case '%':
            return fmod(userNum1, userNum2);

        default:
            return -1;
    }
}

int main() {
    // Declaring variables
    char userSign, wait;
    std::string userNum1Str, userNum2Str;
    double userNum1, userNum2, result;

    // Gets num1 from the user
    std::cout << "Enter a number: ";
    std::cin >> userNum1Str;
    // Gets num2 from the user
    std::cout << "\nEnter a second number: ";
    std::cin >> userNum2Str;

    // Tries casting the two numbers to double
    try {
        userNum1 = std::stod(userNum1Str);
        userNum2 = std::stod(userNum2Str);
    } catch (...) {
        std::cout << "You must enter a number for both inputs.";
        std::cin >> wait;
    }

    // Gets the sign from the user
    std::cout << "\nEnter an sign (sign: +, -, *, /, %): ";
    std::cin >> userSign;

    // set the result to the function to get the
    // return value and calls the function
    result = Calculate(userNum1, userNum2, userSign);

    // If the user entered a invalid sign
    if (result == -1) {
        std::cout << userSign << " is not a valid sign.";

        // Displays the result of the product
    } else {
        std::cout << userNum1 << userSign << userNum2;
        std::cout << " = " << result << "\n";
    }
}
