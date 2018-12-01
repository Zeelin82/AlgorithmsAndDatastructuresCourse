#pragma once
#include "OptionInput.h"
#include <vector>
#include <chrono>
#include <algorithm>
class Assignment
{
public:
	Assignment();
	~Assignment();
	static void bucketSort();
	static void insertionSort();
	static void addVectors(std::vector<std::vector<int>>* v);
	static void benchmarkAndSort(std::vector<int> *v);
	static void chooseAssingment();
};

