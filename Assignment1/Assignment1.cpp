#include "pch.h"
#include "Assignment1.h"
#include "BucketSort.h"
#include "InsertionSort.h"

Assignment1::Assignment1()
{
}


Assignment1::~Assignment1()
{
}

void Assignment1::bucketSort() {
	std::vector<int> vector = {7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52};
	BucketSort::printVector(&vector);
	BucketSort::sortVector(&vector);
	BucketSort::printVector(&vector);
}

void Assignment1::insertionSort() {
	std::vector<int> vector = { 7, 9, 19, 1, 23, 5, 1, 1, 7, 23, 52 };
	InsertionSort::printVector(&vector);
	InsertionSort::sortVector(&vector);
	InsertionSort::printVector(&vector);
}