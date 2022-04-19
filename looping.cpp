// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: April 2022
// This program uses a while loop to do math

#include <iostream>

int main() {
    // this function uses a while loop
    std::string integerAsString;
    int integerAsNumber;
    int loopCounter = 0;
    int calculation = 0;

    // input
    try {
        std::cout << "Enter in an integer: ";
        std::cin >> integerAsString;

        // process & output
        integerAsNumber = std::stoi(integerAsString);
        while (loopCounter <= integerAsNumber) {
            calculation = calculation + loopCounter;
            loopCounter = loopCounter + 1;
        } std::cout << "\nThe sum of those number is " <<
        calculation << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nThat was not a valid integer.";
}
}
