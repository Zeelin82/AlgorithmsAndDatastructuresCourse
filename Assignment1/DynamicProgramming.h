#pragma once
#include <math.h>
#include <map>
class DynamicProgramming
{
public:
	DynamicProgramming();
	~DynamicProgramming();
	static int nonDynamicFunction(int n);
	static int dynamicFunction(std::map<int, int> &partialSum, int n);
};

