#include "RandomSimpleGraph.h"

#include <iostream>


RandomSimpleGraph::RandomSimpleGraph(std::string &grapicSeries) : SimpleGraph(grapicSeries) {
    RandomizeGraph(10);
}

void RandomSimpleGraph::RandomizeGraph(const int iterations) {
    for (int i=0; i<iterations; ++i)
        RelaxEdge();
    std::cout << "After randomization\n";
    Print();
}
