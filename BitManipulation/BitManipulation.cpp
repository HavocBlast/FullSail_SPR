#include <iostream>
#include <string>
#include <cmath>

unsigned int bitField = 10;				// Initial int
unsigned int number = 1;				// Used to select bit using leftShift operator
int operation = 0;
int bit = 0;

static std::string ConvertToBinary(unsigned int bitField){
	std::string num_str = "";
	
	for(int i = 31; i >= 0; i--){
		if(bitField < pow(2,i)){
			num_str += "0";
		}
		else{
			num_str += "1";
			bitField -= pow(2,i);
		}
	}

	// Formats binary number for readability

	for(int i = 0; i < num_str.size(); i+= 5){
		num_str.insert(i, " ");
	}

	return num_str;
}

static void Print(unsigned int bitField){
	std::cout << "\nNew Number: " << std::to_string(bitField) << std::endl;
	std::cout << "Binary Form: " << ConvertToBinary(bitField) << std::endl;
}

static int GetBit(){
	std::cout << "Choose bit index: ";
	std::cin >> bit;
	return bit;
}

void TurnOn(int bitIndex){
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField | number;
	Print(bitField);
}

static void TurnOff(int bitIndex){
	// Use negate and AND
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField & ~number;
	Print(bitField);
}

static void Toggle(int bitIndex){
	// Use XOR
	number = number << bitIndex;		// selects the needed bit location
	bitField = bitField ^ number;
	Print(bitField);
}

static void Negate(){
	Print(~bitField);
}

static void LeftShift(){
	// Move the bits for a number by one to the left
	bitField = bitField << 1;
	Print(bitField);
}

static void RightShift(){
	// Move the bits for a number by one to the left
	bitField = bitField >> 1;
	Print(bitField);
}

int main(){
	std::cout << "bitField: " << bitField << std::endl;
	//TODO: format binary into bytes like below
	// Bits: 0000 0000 0000 0000 0000 0000
	std::cout << "Bits: " << ConvertToBinary(bitField) << std::endl;
	std::cout << "********************************************************************************";
	std::cout << "\nTurnOn = 1, TurnOff = 2, Toggle = 3, Negate = 4, Left Shift = 5, Right Shift = 6" << std::endl;
	std::cout << "Choose an operation: ";
	std::cin >> operation;
	
	// Select operation based on input
	switch(operation){
		case 1:
			bit = GetBit();
			TurnOn(bit);
			break;
		case 2:
			bit = GetBit();
			TurnOff(bit);
			break;
		case 3:
			bit = GetBit();
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