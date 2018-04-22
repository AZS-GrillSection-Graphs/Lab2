//
// Created by os8 on 22.04.18.
//

#ifndef GRAPHS2_RANDOMKREGULARGRAPH_H
#define GRAPHS2_RANDOMKREGULARGRAPH_H


#include "SimpleGraph.h"

class RandomKRegularGraph : public SimpleGraph {
public:
    RandomKRegularGraph() : SimpleGraph(GenerateKRegularGraphNumberSeries()) {}
    static std::string GenerateKRegularGraphNumberSeries();
};


#endif //GRAPHS2_RANDOMKREGULARGRAPH_H
