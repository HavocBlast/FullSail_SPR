#include <iostream>
#include <string>

enum EnumColorDefinition{Red, Blue, Yellow, White};

struct Car{
	char Make[32];
	char Model[32];
	int Year;
	int Mileage;
	EnumColorDefinition Color;
};

std::string GetCarColor(Car car){
	std::string colorStr;
		switch(car.Color){
		
		case 1:
			colorStr = "Red";
			break;
		case 2:
			colorStr = "Blue";
			break;
		case 3:
			colorStr = "Yellow";
			break;
		case 4:
			colorStr = "White";
			break;
		default:
			colorStr = "Mystery Color";
			break;
		}
	return colorStr;
}

EnumColorDefinition StringToColor(std::string colorInput){
	switch(std::tolower(colorInput[0])){
		case 'r':
			return EnumColorDefinition::Red;
		case 'b':
			return EnumColorDefinition::Blue;
		case 'y':
			return EnumColorDefinition::Yellow;
		case 'w':
			return EnumColorDefinition::White;
		default:
			break;
	}
}

void repaintCar(Car* ptrCar, EnumColorDefinition newcolor){
	ptrCar->Color = newcolor;
}

void printCar(Car c, int index){
	std::cout << "Car " << index + 1 << " - " << c.Year << " " << GetCarColor(c) << " " << c.Make << " " << c.Model << " with " << c.Mileage << " miles" << std::endl;
}

void printCarPointer(Car* ptrCar, int index){
	std::cout << "Car " << index + 1 << " - " << ptrCar->Year << " " << GetCarColor(*ptrCar) << " " << ptrCar->Make << " " << ptrCar->Model << " with " << ptrCar->Mileage << " miles" << std::endl;
}

void addMileage(Car* ptrCar, int milestoadd){
	ptrCar->Mileage += milestoadd;
}

int main()
{
	Car cars[3]{};

	for(int i = 0; i < (sizeof(cars)/sizeof(*cars)); i++){
		std::cout << "\nWhat is the make of the car? ";
		std::cin.getline(cars[i].Make, 32);

		std::cout << "\nWhat is the model? ";
		std::cin.getline(cars[i].Model, 32);

		std::cout << "\nWhat is the year? ";
		int yearInput = 0;
		std::cin >> cars[i].Year;
		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "\nWhat is the mileage? ";
		std::cin >> cars[i].Mileage;
		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "\n\t(1 = Red | 2 = Blue | 3 = Yellow | 4 = White)\n\nWhat is the color? ";
		int colorInput = 0;
		std::cin >> colorInput;
		cars[i].Color = (EnumColorDefinition)colorInput;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}

	//INFO: Part 2
		std::cout << "\n\n\t***** Repainting Car *****\n\n";

		// Lists the cars with an associated number for user to choose
		for(int i = 0; i < (sizeof(cars)/sizeof(*cars)); i++){
			std::cout << "("<< i + 1 << " : " << cars[i].Make << " " << cars[i].Model << ")   ";
		}
		std::cout <<  "\n\n\tWhat car would you like to repaint? ";
		int carSelection;
		std::cin >> carSelection;
		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "\n\n\tWhat color would you like to paint your " << cars[(carSelection - 1)].Make << " " << cars[(carSelection - 1)].Model << "?\n";
		std::string colorChoice;
		std::cin >> colorChoice;

		repaintCar(&cars[carSelection -1], StringToColor(colorChoice));
		std::cout << "We repainted your " << cars[(carSelection - 1)].Make << " " << cars[(carSelection - 1)].Model << " " << GetCarColor(cars[(carSelection - 1)]);

	// INFO: Part 3
	std::cout << "\n\n\tPrinting cars...\n\n";
	for(int i = 0; i < (sizeof(cars)/sizeof(*cars)); i++){
		printCar(cars[i], i);
	}

	std::cout << "\n\n\tPrinting car pointers...\n\n";
	for(int i = 0; i < (sizeof(cars)/sizeof(*cars)); i++){	
		printCarPointer(&cars[i], i);
	}
	
	// INFO: Part 4
	std::cout << "\n\n\t***** Add Mileage *****\n\n";

	
	for(int i = 0; i < (sizeof(cars)/sizeof(*cars)); i++){
		std::cout << i + 1 << " : " << cars[i].Make << " " << cars[i].Model << "   ";
	}
	std::cout <<  "\n\n\tWhat car would you like to add mileage? ";
	carSelection;
	std::cin >> carSelection;
	std::cin.clear();
	std::cin.ignore(10000, '\n');

	std::cout << "\nHow many miles would you like to add to the " << cars[carSelection - 1].Make << " " << cars[carSelection - 1].Model << "? ";
	int mileage;
	std::cin >> mileage;
	std::cin.clear();
	std::cin.ignore(10000, '\n');

	std::cout << "The " << cars[carSelection - 1].Make << " " << cars[carSelection - 1].Model << " had " << cars[carSelection - 1].Mileage << " miles.\n";
	addMileage(&cars[carSelection - 1],mileage);
	std::cout << "The " << cars[carSelection - 1].Make << " " << cars[carSelection - 1].Model << " now has " << cars[carSelection - 1].Mileage << " miles.\n";
}