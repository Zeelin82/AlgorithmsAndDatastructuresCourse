#include "pch.h"
#include "BubbleSort.h"


BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

std::vector<int>* BubbleSort::sortVector(std::vector<int> *v) {
	for (int i = v->size() - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v->at(j) > v->at(j + 1)) {
				int temp = v->at(j + 1);
				v->at(j + 1) = v->at(j);
				v->at(j) = temp;
			}
		}
	}
	return v;
}

void BubbleSort::printVector(std::vector<int> *v) {
	std::cout << "vector : [ ";
	for (auto i : *v) {
		std::cout << i << " ";
	}
	std::cout << "]\n";
}

std::string BubbleSort::getDiscription() {
	return "Bubble sort\n";
}