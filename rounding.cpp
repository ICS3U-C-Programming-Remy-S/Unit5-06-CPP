// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Dec, 6, 2023
// This program will ask user for a decimal
// and a number of decimal places to round to
// and it will display the new rounded number

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

void RoundDecimal(double const &decimal, int numPlace) {
    // round decimal number to user's preference
    decimal = decimal * pow(10, numPlace) + 0.5;
    decimal = static_cast<int>(decimal);
    decimal = decimal / pow(10, numPlace);
}

int main() {
    // declare variables
    std::string userDecimalStr, userPlacesStr;
    double userDecimalDouble;
    int places;

    // Get decimal and rounded number and display message to user
    std::cout << "This program will ask user for a decimal" << std::endl;
    std::cout << "and a number of decimal places to round to" << std::endl;
    std::cout << "and it will display the new rounded number." << std::endl;
    std::cout << "Please enter your decimal: ";
    std::cin >> userDecimalStr;
    std::cout << "Please enter your decimal places to round the number: ";
    std::cin >> userPlacesStr;

    // Convert decimal and places
    try {
        userDecimalDouble = std::stod(userDecimalStr);
        int userPlacesInt = std::stoi(userPlacesStr);

        // Call function and store the result
        RoundDecimal(userDecimalDouble, userPlacesInt);

        // display new rounded number
        std::cout << "The rounded number is " << userDecimalDouble << std::endl;
    } catch (std::invalid_argument) {
        // display input was invalid
        std::cout << userDecimalStr << " and " << userPlacesStr <<
        " are not a valid decimal and/or decimal places" << std::endl;
    }

    return 0;
}
