#pragma once
#include <iostream>
#include <vector>

class BucketSort
{
public:
	BucketSort();
	~BucketSort();
	static std::vector<int>* sortVector(std::vector<int> *v);
	static void printVector(std::vector<int> *v);
	static std::string getDiscription();
};

