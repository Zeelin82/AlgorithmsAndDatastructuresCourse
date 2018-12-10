#include "pch.h"
#include "Graph.h"

TraversalNode::TraversalNode() {}
TraversalNode::~TraversalNode() {}

TraversalNode::TraversalNode(int id, std::string adversary) {
	this->id = id;
	this->adversary = adversary;
}

int TraversalNode::getId() { return id; }
std::string TraversalNode::getAdversary() { return adversary; }

Graph::Graph()
{
}


Graph::~Graph()
{
	delete [] advesaries;
}

Graph::Graph(int vertecies) {
	this->vertecies = vertecies;
	advesaries = new std::list<int>[vertecies];
}

void Graph::addEdge(int v1, int v2) {
	advesaries[v1].push_back(v2);
}

bool Graph::isEdge(int v1, int v2) {
	std::list<int>::iterator i;
	for (i = advesaries[v1].begin(); i != advesaries[v1].end(); i++) {
		if (v2 == *i) {
			return true;
		}
	}
	return false;
}

int Graph::getNumNodes() {
	return vertecies;
}

void Graph::printGraph() {
	for (int v = 0; v < vertecies; v++) {
		std::cout << "\n Adjecency list of node " << v << "\n head: ";
		
		//iterate over the list of elements in the array v
		std::list<int>::iterator i;
		for (i = advesaries[v].begin(); i != advesaries[v].end(); i++) {
			std::cout << "-> " << *i << "\n"; 
		}
	}
}

std::list<TraversalNode> Graph::successors(TraversalNode node, std::string adversary) {
	std::list<TraversalNode> successors;
	std::list<int>::iterator i;
	int id = node.getId();
	for (i = advesaries[id].begin(); i != advesaries[id].end(); i++) {
		TraversalNode n(*i, adversary);
		successors.push_back(n);
	}
	return successors;
}

std::list<int> Graph::breadthFirst(int startNode) {
	std::queue<TraversalNode> nodesToVisit = std::queue<TraversalNode>();
	std::list<TraversalNode> visitedNodes = std::list<TraversalNode>();

	TraversalNode node(startNode, "friend");
	nodesToVisit.push(node);
	// Traverse all connected nodes
	std::string adversary;
	while (!nodesToVisit.empty()) {

		node = nodesToVisit.front();
		nodesToVisit.pop();
		visitedNodes.push_back(node);

		if (node.getAdversary() == "friend") {
			adversary = "adversary";
		}
		else {
			adversary = "friend";
		}

		std::list<TraversalNode> adjacentNodes = successors(node, adversary);
		std::list<TraversalNode>::iterator i;
		// add successors adversaries if they have not been visited and are not in the queue nodesToVisit 
		for (i = adjacentNodes.begin(); i != adjacentNodes.end(); i++) {
			if (!doListContains(visitedNodes, *i) && !doQueueContains(nodesToVisit, *i)) {
				nodesToVisit.push(*i);
			}
		}
	}
	std::list<int> friends;
	for (auto i : visitedNodes) {
		if (i.getAdversary() == "friend" && i.getId() != startNode) {
			friends.push_back(i.getId());
		}
	}
	return friends;
}

bool Graph::doListContains(std::list<TraversalNode> list, TraversalNode node) {
	std::list<TraversalNode> temp = list;
	while (!temp.empty()) {
		if (temp.front().getId() == node.getId()) {
			return true;
		}
		temp.pop_front();
	}
	return false;
}

bool Graph::doQueueContains(std::queue<TraversalNode> queue, TraversalNode node) {
	std::queue<TraversalNode> temp = queue;
	while (!temp.empty()) {
		if (temp.front().getId() == node.getId()) {
			return true;
		}
		temp.pop();
	}
	return false;
}
