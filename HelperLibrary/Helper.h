#pragma once
#include <iostream>

namespace Helper {
	int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0) {
		std::cout << strMessage; // prints message
		int num = 0;
		while (true) { // keeps asking of the input until valid input is made
			if (std::cin >> num) { // Checks to make sure that the input is an int
				// Checks to make sure either the min and max are set to zero or that the input 
				// is within the min and max range
				if ((nMinimumRange == 0 && nMaximumRange == 0) ||
					(num >= nMinimumRange && num <= nMaximumRange)) {
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					break;
				}
				else {// If input is not within the range then inform user and ask again
					std::cout << "Input is out of range. " << strMessage << std::endl;
				}
			}
			else {// if input is not an int it will inform user and as the message over again
				std::cout << "Input is not a valid integer. " << strMessage << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}
		}
		return num;
	}
}