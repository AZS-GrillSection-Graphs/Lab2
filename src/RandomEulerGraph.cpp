//
// Created by os8 on 21.04.18.
//

#include "RandomEulerGraph.h"
#include <cstdlib>
#include <iostream>
#include <string>

RandomEulerGraph::RandomEulerGraph() : SimpleGraph(GenerateEulerGraphNumberSeries()) {
    while(NumberOfComponents() > 1) {
        RelaxEdge();
    }
}

std::string RandomEulerGraph::GenerateEulerGraphNumberSeries() {
    std::string numberSeries;

    int numberOfVerticles = rand() % 6 + 3;        //limit for tests

    for(int i = 0; i < numberOfVerticles; i++) {
        int verticleDegree = rand() % (numberOfVerticles - 2) + 2;

        if(verticleDegree % 2)
            --verticleDegree;

        numberSeries += std::to_string(verticleDegree);
        numberSeries += " ";
    }

    return numberSeries;
}

void RandomEulerGraph::EulerCycle() {
    AdjacencyList * workAdjList = new AdjacencyList(*(reinterpret_cast<AdjacencyList *> (m_graphRepr)));
    std::vector <int> eulerCycle;

    for(int i = 0; i < workAdjList->GetAdjList()[0].size(); i++) {
        int selectedVertical = workAdjList->GetAdjList()[0][i];
        workAdjList->DeleteEdge(selectedVertical, 0);
        EulerCycle_R(workAdjList, selectedVertical, eulerCycle);
    }
    eulerCycle.push_back(0);

    std::cout << "Euler Cycle:\n";
    for(int i = 0; i < eulerCycle.size(); i++)
        std::cout << (eulerCycle[i] + 1) << " ";
    std::cout << std::endl;
}

void RandomEulerGraph::EulerCycle_R(AdjacencyList *workAdjList, const int index, std::vector<int> &eulerCycle) {

    for(int i = 0; i < workAdjList->GetAdjList()[index].size(); i++) {
        int selectedVertical = workAdjList->GetAdjList()[index][i];
        workAdjList->DeleteEdge(selectedVertical, index);
        EulerCycle_R(workAdjList, selectedVertical, eulerCycle);
    }
    eulerCycle.push_back(index);
}
