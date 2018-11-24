#pragma once
#include <iostream>
#include <vector>
class InsertionSort
{
public:
	InsertionSort();
	~InsertionSort();
	static std::vector<int>* sortVector(std::vector<int>* v);
	static void printVector(std::vector<int>* v);
};

