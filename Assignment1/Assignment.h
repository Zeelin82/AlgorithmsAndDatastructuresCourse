#pragma once
#include "OptionInput.h"
#include <vector>
#include <chrono>
#include <algorithm>
#include <fstream>
#include <string>
#include "AdveseriesGraph.h"
class Assignment
{
public:
	Assignment();
	~Assignment();
	static void bucketSort();
	static void insertionSort();
	static void addVectors(std::vector<std::vector<int>>* v);
	static void benchmarkAndSort(std::vector<int> *v);
	static void adveseriesGraph();
	static void chooseAssingment();
	static void writeToFile(std::string text);
};

