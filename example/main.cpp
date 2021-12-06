#include <iostream>
#include "../includes/syringe/syringe.hpp"


/*
    *    example/main.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


int main(void) {
    if (IsWin64().Execute() == false) {
        printf("This is a 32 bit machine!");
        return EXIT_FAILURE;
    }
    printf("This is a 64 bit machine!");
    return EXIT_SUCCESS;
}