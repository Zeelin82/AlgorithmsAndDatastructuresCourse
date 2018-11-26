#pragma once
#include <iostream>
#include <vector>
class BubbleSort
{
public:
	BubbleSort();
	~BubbleSort();
	static std::vector<int>* sortVector(std::vector<int>* v);
	static void printVector(std::vector<int>* v);
	static std::string getDiscription();
};

