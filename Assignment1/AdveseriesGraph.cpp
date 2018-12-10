#include "pch.h"
#include "AdveseriesGraph.h"


AdveseriesGraph::AdveseriesGraph()
{
}


AdveseriesGraph::~AdveseriesGraph()
{
}

void AdveseriesGraph::graph() {
	/*Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);*/

	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1, 5);
	g.addEdge(5, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 6);
	g.addEdge(6, 4);
	g.addEdge(4, 5);
	g.addEdge(4, 0);
	g.printGraph();
	/*std::list<int> x = g.successors(2);
	std::list<int>::iterator i;
	std::cout << "list: ";
	for (i = x.begin(); i != x.end(); i++) {
		std::cout << *i << " ";
	}*/

	//std::list<int> traversalOrder = g.breadthFirst(4);
	std::list<int> traversalOrder = g.breadthFirst(0);
	std::list<int>::iterator i;
	std::cout << "friends: ";
	for (i = traversalOrder.begin(); i != traversalOrder.end(); i++) {
		std::printf("%d ", *i);
	}
	std::cout << "\n";
}
