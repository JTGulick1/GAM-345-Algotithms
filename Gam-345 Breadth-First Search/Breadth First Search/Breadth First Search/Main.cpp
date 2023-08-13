#include<iostream>
#include<list>
#include "Graph.h"
using namespace std;

int main() {

    Graph graph(7);
    graph.addNumber(0, 2); // Create A and C, Link A to C 
    graph.addNumber(0, 1); // Link A to B
    graph.addNumber(2, 3); // Creates D, Links C to D
    graph.addNumber(2, 4); // Creates E, Links C to E
    graph.addNumber(1, 5); // Creates F, Links B to F
    graph.addNumber(5, 6); // Creates G, Links F to G
        
    graph.startNum(0);


	return 0;
}