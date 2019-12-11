// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: December 2019
// This is a program which tells you the first 100 numbers of the fibinacci
// sequence.

#include <iostream>
#include <array>

template<size_t N>
int Calculations(std::array<int, N> fibonacciSequence, int counter2) {
    int number1 = 1;
    int number2 = 1;
    int answer = 0;

    fibonacciSequence[0] = 1;
    fibonacciSequence[1] = 1;

    answer = fibonacciSequence[counter2 - 1] + fibonacciSequence[counter2];
    number1 = number2;
    number2 = answer;
    return answer;
}

int main() {
    // this is what runs the program.
    std::array<int, 102> fibonacciSequence;
    int answer = 0;
    int counter2 = 1;
    for (int counter = 2; counter < 102; counter++) {
        answer = Calculations(fibonacciSequence, counter2);
        fibonacciSequence[counter] = answer;
        counter2 = counter2 + 1;
    }
    for (int counter3 = 2; counter3 < 102; counter3++) {
        std::cout << fibonacciSequence[counter3] << std::endl;
    }
}
