#pragma once
#include <list>
#include <iostream>
#include <queue>
#include <unordered_set>

class TraversalNode {
private:
	int id;
	std::string adversary;
public:
	TraversalNode();
	~TraversalNode();
	TraversalNode(int id, std::string adversary);
	int getId();
	std::string getAdversary();
};

class Graph
{
private:
	int vertecies;
	std::list<int>* advesaries; //an array containing lists to each adjecent adveseries
public:
	Graph();
	~Graph();
	Graph(int vertecies);
	void addEdge(int v1, int v2);

	bool isEdge(int v1, int v2);

	int getNumNodes();

	void printGraph();

	std::list<TraversalNode> successors(TraversalNode node, std::string adversary);

	std::list<int> breadthFirst(int vertex);

	bool doListContains(std::list<TraversalNode> list, TraversalNode node);

	bool doQueueContains(std::queue<TraversalNode> queue, TraversalNode node);

};
