#include <iostream>

int numbers[15];

void viewMemory(int number, int* address){
    std::cout << "Value: " << number << "\tMemory address: " << address << std::endl;
}

int main(){
    srand(std::time(0));
    for(int number : numbers){
        number = std::rand() % 255;
        viewMemory(number, &number);
    }
}
