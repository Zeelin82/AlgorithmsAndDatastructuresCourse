#include "pch.h"
#include "HuffmanCoding.h"


HuffmanCoding::HuffmanCoding()
{
}


HuffmanCoding::~HuffmanCoding()
{
}

void HuffmanCoding::compressString(std::string s) {
	std::priority_queue<TreeWrapper> queue;
	std::map<char, int> frequency;
	std::map<char, std::vector<bool>> bitRepresentation;
	// find frequency of characters in "s"
	for (int i = 0; i < s.size(); i++) {
		frequency[s[i]]++;
	}

	// create trees and add to the queue
	for (auto i : frequency) {
		queue.push(TreeWrapper(new Tree(i.second, i.first)));
	}
	
	//build the Huffman tree
	while (queue.size() > 1) {
		Tree *child1 = queue.top().tree;
		queue.pop();
		Tree *child2 = queue.top().tree;
		queue.pop();
		queue.push(TreeWrapper(new Tree(child1, child2)));
	}

	std::vector<bool> bitPath(0);
	queue.top().tree->printTree(bitPath);

	// translate string to bits
	queue.top().tree->encode(bitPath, bitRepresentation);
	std::vector<bool> bitString(0);
	for (auto i : s) {
		auto charBit = bitRepresentation.find(i);
		bitString.insert(bitString.end(), charBit->second.begin(), charBit->second.end());
	}
	std::cout << s << "\n";
	// print bit string
	for (auto i : bitString) {
		std::cout << i;
	}
	std::cout << "\n";
	// translate bitstring to text
	std::vector<bool>::iterator i = bitString.begin();
	std::string decodedString = "";
	while (i != bitString.end()) {
		char c = queue.top().tree->decode(i);
		decodedString.insert(decodedString.end(), c);
	}
	std::cout << decodedString << "\n";
}
