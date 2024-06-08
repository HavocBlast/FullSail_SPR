#include <iostream>

int numbers[15];

int main (){
    srand(std::time(0));
    for(int number : numbers){
        number = std::rand() % 255;
        std::cout << "\tvalue: " << number << "\tFound at memory address: " << &number << std::endl;
    }
}
