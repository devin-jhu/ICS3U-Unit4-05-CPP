// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop adder

#include <iostream>

int main() {
    // this program shows the sum of all numbers from 0 to number
    std::string intNumber;
    int number;
    int sum = 0;
    int numberCounter = 1;
    int addedNumber;



    // input
    std::cout << "Enter number to add to (integer): ";
    std::cin >> intNumber;
    std::cout << std::endl;

    // process & output
    try {
        number = std::stoi(intNumber);
        for (int counter = 1; counter < number + 1; counter++) {
            std::cout << "Enter number " << numberCounter <<" (integer): ";
            std::cin >> addedNumber;

            if (addedNumber < 0) {
                continue;
            }
            sum = sum + addedNumber;
            numberCounter = numberCounter + 1;
        }
        std::cout << "The sum of numbers is " << sum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Not an integer";
    }
    std::cout << "\nDone." << std::endl;
}
