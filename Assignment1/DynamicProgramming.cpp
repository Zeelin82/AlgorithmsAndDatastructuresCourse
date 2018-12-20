#include "pch.h"
#include "DynamicProgramming.h"


DynamicProgramming::DynamicProgramming()
{
}


DynamicProgramming::~DynamicProgramming()
{
}

int DynamicProgramming::nonDynamicFunction(int n) {
	if (n <= 1) { return 1;	}
	int sum = DynamicProgramming::nonDynamicFunction(n - 1);
	sum += DynamicProgramming::nonDynamicFunction(ceil(static_cast<double>(n) / 2));
	return sum + n;
}

int DynamicProgramming::dynamicFunction(std::map<int, int> &partialSum, int n) {
	int sum = 0;
	auto find = partialSum.find(n);
	if (find != partialSum.end()) { return find->second; }
	else {
		sum += DynamicProgramming::dynamicFunction(partialSum, n - 1);
		sum += DynamicProgramming::dynamicFunction(partialSum, ceil(static_cast<double>(n) / 2));
		partialSum[n] = sum + n;
	}
	return partialSum[n];
}
