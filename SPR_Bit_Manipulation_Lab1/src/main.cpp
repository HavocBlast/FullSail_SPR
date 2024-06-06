#include <iostream>
#include "Console.h"
#include <bitset>
#include <string>

unsigned int bitField = 19;				// Initial int
unsigned int number = 1;				// Used to select bit using leftShift operator
int operation = 0;
int bit = 0;

void Print(unsigned int bitField){
	std::cout << "New bit: " << std::to_string(bitField) << std::endl;
}

void TurnOn(int bitIndex){
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField | number;
	Print(bitField);
}

void TurnOff(int bitIndex){
	// Use negate and AND
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField & ~number;
	Print(bitField);
}

void Toggle(int bitIndex){
	// Use XOR
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField ^ number;
	Print(bitField);
}

void Negate(){
	Print(~bitField);
}

void LeftShift(){
	// Move the bits for a number by one to the left
	bitField = bitField << 1;
	Print(bitField);
}

void RightShift(){
	// Move the bits for a number by one to the left
	bitField = bitField >> 1;
	Print(bitField);
}

int main(){
	std::bitset<sizeof(int) * 8> bits(bitField);

	std::cout << "bitField: " << bitField << std::endl;
	//TODO: format binary into bytes like below
	// Bits: 0000 0000 0000 0000 0000 0000
	std::cout << "Bits: " << bits.to_string();

	std::cout << "\nTurnOn = 1, TurnOff = 2, Toggle = 3, Negate = 4, Left Shift = 5, Right Shift = 6" << std::endl;
	std::cout << "Choose an operation: ";
	std::cin >> operation;
	
	//Choose bit index:
	
	std::cout << "Choose bit index: ";
	std::cin >> bit;
	switch(operation){
		case 1:
			TurnOn(bit);
			break;
		case 2:
			TurnOff(bit);
			break;
		case 3:
			Toggle(bit);
			break;
		case 4:
			Negate();
			break;
		case 5:
			LeftShift();
			break;
		case 6:
			RightShift();
			break;
		default:
			std::cout << "\n Please enter a valid option";
			break;
	}
}