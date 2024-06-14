#include "Helper.h"
#include <iostream>

int main() {
    int number = Helper::GetValidatedInt("Pick a number: ", 34, 50);
    std::cout << number << std::endl;

    std::cout << "*********************" << std::endl;

    number = Helper::GetValidatedInt("Pick a number: ");
    std::cout << number << std::endl;
}
