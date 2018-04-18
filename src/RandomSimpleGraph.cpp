#include "RandomSimpleGraph.h"

#include <iostream>


RandomSimpleGraph::RandomSimpleGraph(std::string &grapicSeries) : SimpleGraph(grapicSeries) {
    RandomizeGraph();
}

void RandomSimpleGraph::RandomizeGraph() {
    for (int i=0; i<10; ++i)
        RelaxEdge();
    std::cout << "After randomization\n";
    Print();
}
