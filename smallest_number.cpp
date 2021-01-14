// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program finds smallest number


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>


template<size_t N>
int FindSmallestNumber(std::array<int, N> randomNumbers) {
    // this function find the smallest number in list

    int smallestNumber = 100;

    for (int counter : randomNumbers) {
        if (smallestNumber > counter) {
            smallestNumber = counter;
        }
    }

    return smallestNumber;
}

main() {
    // this function shows the largest number in 10 random numbers

    std::array<int, 10> randomNumbers;
    int aNumber = 0;
    int smallestNumber = 0;

    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = aNumber;
  std::cout << "The random number " << loop_counter + 1
            << " is: " << aNumber << std::endl;
    }
    std::cout << " " << std::endl;

    smallestNumber = FindSmallestNumber(randomNumbers);

    std::cout << "The smallest number is: " << smallestNumber << std::endl;
}
