#pragma once
#include <iostream>
#include <vector>
class BubbleSort
{
public:
	BubbleSort();
	~BubbleSort();
	std::vector<int>* sortVector(std::vector<int>* v);
	void printVector(std::vector<int>* v);
};

