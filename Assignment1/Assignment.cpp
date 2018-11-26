#include "pch.h"
#include "Assignment.h"
#include "BucketSort.h"
#include "InsertionSort.h"
#include <stdio.h>

Assignment::Assignment()
{
}


Assignment::~Assignment()
{
}

void Assignment::bucketSort() {
	std::cout << BucketSort::getDiscription().c_str();
	std::vector<int> vector = {7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52, 1};
	BucketSort::printVector(&vector);
	BucketSort::sortVector(&vector);
	BucketSort::printVector(&vector);
}

void Assignment::insertionSort() {
	std::cout << InsertionSort::getDiscription().c_str();
	std::vector<int> vector = { 7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52, 1};
	InsertionSort::printVector(&vector);
	InsertionSort::sortVector(&vector);
	InsertionSort::printVector(&vector);
}

void Assignment::chooseAssingment() {
	std::cout << "Choose content:\n";
	std::cout << "1. Bucket sort\n";
	std::cout << "2. Insertion sort\n";
	std::cout << "3. back\n";
	int option = OptionInput::getInput();
	switch (option)
	{
	case 1:
		bucketSort();
		break;
	case 2:
		insertionSort();
		break;
	case 3:
		break;
	default:
		break;
	}
}