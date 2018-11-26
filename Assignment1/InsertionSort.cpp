#include "pch.h"
#include "InsertionSort.h"


InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}

std::vector<int>* InsertionSort::sortVector(std::vector<int> *v) {
	for (int i = 0; i < v->size(); i++) {
		for (int j = i; j > 0; j--) {
			if (v->at(j) < v->at(j - 1)) {
				int temp = v->at(j - 1);
				v->at(j - 1) = v->at(j);
				v->at(j) = temp;
			}
			else {
				break;
			}
		}
	}
	return v;
}

void InsertionSort::printVector(std::vector<int> *v) {
	std::cout << "vector : [ ";
	for (auto i : *v) {
		std::cout << i << " ";
	}
	std::cout << "]\n";
}

std::string InsertionSort::getDiscription() {
	return "Insertion sort:\n";
}