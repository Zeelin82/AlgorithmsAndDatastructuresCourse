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
	std::vector<std::vector<int>> vectors;
	Assignment::addVectors(&vectors);
	for (auto v : vectors) {
		Assignment::benchmarkAndSort(&v);
	}
	
}

void Assignment::addVectors(std::vector<std::vector<int>> *v){
	for (int i = 0; i < 100000; i = i + 500) {
		std::vector<int> vector;
		for (int j = 0; j < i; j++) {
			vector.push_back(j);
		}
		std::random_shuffle(vector.begin(), vector.end());
		v->push_back(vector);
	}
}

void Assignment::benchmarkAndSort(std::vector<int> *v) {
	auto before = std::chrono::high_resolution_clock::now();
	InsertionSort::sortVector(v);
	auto after = std::chrono::high_resolution_clock::now();
	auto delta = std::chrono::duration<double>(after-before);
	printf("Vector size %i Time taken: %fs \n", v->size() ,delta.count());
	//printf(" %f\n", delta.count()*1000);
	std::string output = std::to_string(v->size()) + "x" + std::to_string(delta.count());
	Assignment::writeToFile(output);
}

void Assignment::adveseriesGraph() {
	AdveseriesGraph::graph();
}

void Assignment::chooseAssingment() {
	std::cout << "Choose content:\n";
	std::cout << "1. Bucket sort\n";
	std::cout << "2. Insertion sort\n";
	std::cout << "3. AdveseryGraph \n";
	std::cout << "4. back\n";
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
		adveseriesGraph();
		break;
	case 4:
		break;
	default:
		break;
	}
}

void Assignment::writeToFile(std::string text) {
	std::ofstream file;
	file.open("../output/insertionSort.txt", std::ios_base::app);
	if (file.is_open()) {
		file << text.c_str() << "\n";
		file.close();
	}
}
