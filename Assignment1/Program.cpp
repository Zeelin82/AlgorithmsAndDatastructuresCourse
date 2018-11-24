// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Assignment1.h"
#include "Exercise.h"
#include "BubbleSort.h"

static void assignment1() {
	Assignment1::bucketSort();
	Assignment1::insertionSort();
}

static void chooseExersice() {
	std::vector<int> vector = { 7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52 };
	BubbleSort b;
	b.printVector(&vector);
	b.sortVector(&vector);
	b.printVector(&vector);
	Exercise::ChooseExersice();
}

static void chooseContent() {
	bool exit = false;
	while (!exit) {
		int option = 0;
		std::cout << "Choose content:\n";
		std::cout << "1. exercises\n";
		std::cout << "2. assignments\n";
		std::cout << "3. exit\n";
		while (!(std::cin >> option)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "incorrect input";
		}
		switch (option)
		{
		case 1:
			chooseExersice();
			break;
		case 2:
			assignment1();
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
