//
// Created by os8 on 21.04.18.
//

#ifndef GRAPHS2_RANDOMEULERGRAPH_H
#define GRAPHS2_RANDOMEULERGRAPH_H


#include "SimpleGraph.h"

class RandomEulerGraph : public SimpleGraph {
public:
    RandomEulerGraph();
    void EulerCycle();
    void EulerCycle_R(AdjacencyList * workAdjList, const int index, std::vector <int> & eulerCycle);

private:
    static std::string GenerateEulerGraphNumberSeries();
};


#endif //GRAPHS2_RANDOMEULERGRAPH_H
