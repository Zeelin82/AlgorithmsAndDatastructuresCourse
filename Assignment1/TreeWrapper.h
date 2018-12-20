#pragma once
#include "Tree.h"
struct TreeWrapper
{	
	Tree *tree;
	TreeWrapper();
	~TreeWrapper();
	TreeWrapper(Tree * tree);
	bool operator<(const TreeWrapper &tw) const;
};
