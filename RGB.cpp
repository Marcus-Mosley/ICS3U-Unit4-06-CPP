// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program states all valid RGB values

#include <iostream>

main() {
    // This function states all valid RGB values
    int counter_1;
    int counter_2;
    int counter_3;

    // Process & Output
    std::cout << "Here are all the valid RGB values:" <<std::endl;
    std::cout << "" <<std::endl;

    for (counter_1 = 0; counter_1 < 255; counter_1++) {
        for (counter_2 = 0; counter_2 < 255; counter_2++) {
            for (counter_3 = 0; counter_3 < 255; counter_3++) {
                std::cout << "RGB( " << counter_1 << "," << counter_2
                << "," << counter_3 << ")" <<std::endl;
            }
        }
    }
}
