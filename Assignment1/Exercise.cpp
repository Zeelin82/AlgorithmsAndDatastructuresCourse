
#include "pch.h"
#include "Exercise.h"


Exercise::Exercise()
{
}


Exercise::~Exercise()
{
}

void Exercise::ChooseExersice() {
	std::cout << "Choose content:\n";
	std::cout << "1. Bubble sort\n";
	std::cout << "3. back\n";
	int option = OptionInput::getInput();
	switch (option)
	{
	case 1:
		bubbleSort();
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

void Exercise::bubbleSort() {
	std::cout << BubbleSort::getDiscription().c_str();
	std::vector<int> vector = { 7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52, 1 };
	BubbleSort::printVector(&vector);
	BubbleSort::sortVector(&vector);
	BubbleSort::printVector(&vector);
}