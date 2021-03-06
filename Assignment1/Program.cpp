// Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Assignment.h"
#include "Exercise.h"
#include "BubbleSort.h"
#include "OptionInput.h"

static void Assignment() {
	Assignment::chooseAssingment();
}

static void chooseExersice() {
	Exercise::ChooseExersice();
}

static void chooseContent() {
	bool exit = false;
	while (!exit) {
		std::cout << "Choose content:\n";
		std::cout << "1. exercises\n";
		std::cout << "2. assignments\n";
		std::cout << "3. exit\n";
		int option = OptionInput::getInput();
		switch (option)
		{
		case 1:
			chooseExersice();
			break;
		case 2:
			Assignment();
			break;
		case 3:
			exit = true;
			break;
		default:
			break;
		}
	}
}

int main()
{
	chooseContent();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
