#include "pch.h"
#include "Tree.h"


Tree::Tree()
{
}


Tree::~Tree()
{
}

Tree::Tree(int weight, char c) {
	this->weight = weight;
	this->c = c;
}

Tree::Tree(Tree *left, Tree *right) {
	this->left = left;
	this->right = right;
	this->weight = left->getWeight() + right->getWeight();
	this->c;
}

int Tree::getWeight() const {
	return weight;
}

void Tree::printTree(std::vector<bool> &bitPath) const {
	if (right != nullptr) {
		bitPath.push_back(1);
		right->printTree(bitPath);
	}

	if (left != nullptr) {
		bitPath.push_back(0);
		left->printTree(bitPath);
	}

	if (left == nullptr && right == nullptr) {
		for (auto i : bitPath) {
			std::cout << i;
		}
		std::cout << " : " << this->c << "\n";
	}
	if (bitPath.size() > 0) {
		bitPath.pop_back();
	}
}

void Tree::encode(std::vector<bool> &v, std::map<char,std::vector<bool>> &m) {
	if (right != nullptr) {
		v.push_back(1);
		right->encode(v, m);
	}

	if (left != nullptr) {
		v.push_back(0);
		left->encode(v, m);
	}

	if (left == nullptr && right == nullptr) {
		std::vector<bool> n = v;
		for (auto i : v) {
			m[this->c] = n;
		}
	}
	if (v.size() > 0) {
		v.pop_back();
	}
}

char Tree::decode(std::vector<bool>::iterator &i) {
	char c;
	if (right != NULL && *i) {
		i++;
		c = right->decode(i);
	} else if (left != NULL && !*i) {
		i++;
		c = left->decode(i);
	}else if (left == NULL && right == NULL) {
		c = this->c;
	}
	return c;
}
