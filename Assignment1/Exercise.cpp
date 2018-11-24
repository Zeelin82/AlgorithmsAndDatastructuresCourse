
#include "pch.h"
#include "Exercise.h"


Exercise::Exercise()
{
}


Exercise::~Exercise()
{
}

void Exercise::ChooseExersice() {
	int option = 0;
	std::cout << "Please select an exersice:\n";
	for (int i = 1; i < 5; i++) {
		std::cout << i << ". Exercise " << i << "\n";
	}
	while (!(std::cin >> option)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "incorrect input";
	}
}