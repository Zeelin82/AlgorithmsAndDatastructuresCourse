#include "pch.h"
#include "TreeWrapper.h"


TreeWrapper::TreeWrapper()
{
	tree = nullptr;
}

TreeWrapper::~TreeWrapper()
{
}

TreeWrapper::TreeWrapper(Tree *tree) {
	this->tree = tree;
}

bool TreeWrapper::operator<(const TreeWrapper &tw) const {
	return tree->getWeight() > tw.tree->getWeight();
}
