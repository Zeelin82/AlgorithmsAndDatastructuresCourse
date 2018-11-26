#include "pch.h"
#include "OptionInput.h"


OptionInput::OptionInput()
{
}


OptionInput::~OptionInput()
{
}

int OptionInput::getInput() {
	int option = 0;
	while (!(std::cin >> option)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "incorrect input";
	}
	return option;
}
