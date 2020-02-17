// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// This program finds the average of the user's marks using lists

#include <iostream>
#include <list>


int average(std::list<int> marks) {
    // this function calculates the average

    int avg = 0;
    int divider = 0;

    // process
    for (int mark : marks) {
        marks.push_front(mark); }

    for (int counter : marks) {
        avg = avg + counter;
        divider += 1; }

    avg = avg / divider;

    return avg;
}

main() {
    // this function uses a list

    std::list<int> marks;
    int mark;
    int calculatedAvg;

    // input
    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;

    std::cout << "Enter a mark: ";
    std::cin >> mark;
    marks.push_back(mark);

    while (mark != -1) {
        std::cout << "Enter a mark: ";
        std::cin >> mark;
        marks.push_back(mark);
    }

    marks.pop_back();  // remove the "-1" that was added

    // function call
    calculatedAvg = average(marks);

    // output
    std::cout << std::endl;
    std::cout << "Here is your average: " << calculatedAvg << std::endl;
}
