#pragma once
#include <iostream>
#include <vector>
#include <map>
class Tree
{
private:
	Tree* left;
	Tree* right;
	int weight;
	char c;
public:
	Tree();
	~Tree();
	Tree(int weight, char c);
	Tree(Tree *left, Tree *right);
	int getWeight() const;
	void printTree(std::vector<bool> &bitRepresentation) const;

	void encode(std::vector<bool>& v, std::map<char, std::vector<bool>>& m);

	char decode(std::vector<bool>::iterator & i);
};

