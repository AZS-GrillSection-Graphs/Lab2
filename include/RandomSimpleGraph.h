#ifndef GRAPHS1_RANDOMSIMPLEGRAPH_H
#define GRAPHS1_RANDOMSIMPLEGRAPH_H

#include "AdjacencyList.h"
#include "SimpleGraph.h"


class RandomSimpleGraph : public SimpleGraph {
public:
    RandomSimpleGraph(std::string& grapicSeries);
    void RandomizeGraph(const int iterations);
};

#endif //GRAPHS1_RANDOMSIMPLEGRAPH_H
