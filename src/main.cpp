#include <iostream>
#include "SimpleGraph.h"
#include "RandomSimpleGraph.h"
#include "RandomEulerGraph.h"
#include "RandomKRegularGraph.h"

int main() {
    std::string inputString("5 4 4 3 2 2 2");

    // Zadanie 1
    std::cout << "Is the string a graphic series? " << SimpleGraph::IsGraphicSeries(inputString) << std::endl;
    SimpleGraph simpleGraph(inputString);
    simpleGraph.Print();
    simpleGraph.ConvertGraph();
    simpleGraph.DrawGraph();
    Graph bc = simpleGraph.BiggestComponent();
    bc.ConvertGraph();
    bc.DrawGraph();

    // Zadanie 6
    simpleGraph.DoesHamiltonCycleExist();
    simpleGraph.DrawGraph();

    // Zadanie 2
    std::cout << "RANDOM SIMPLE GRAPH\n";
    RandomSimpleGraph randomSimpleGraph(inputString);
    randomSimpleGraph.ConvertGraph();
    randomSimpleGraph.DrawGraph();

    // Zadanie 4
    srand(time(0));
    RandomEulerGraph randomEulerGraph;
    randomEulerGraph.ConvertGraph();
    randomEulerGraph.EulerCycle();
    randomEulerGraph.Print();
    randomEulerGraph.DrawGraph();

    // Zadanie 5
    srand(time(0));
    RandomKRegularGraph kRegularGraph;
    kRegularGraph.ConvertGraph();
    kRegularGraph.Print();
    kRegularGraph.DrawGraph();

    // Zadanie 3
    Graph biggestComponent = kRegularGraph.BiggestComponent();
    biggestComponent.ConvertGraph();
    biggestComponent.Print();
    biggestComponent.DrawGraph();

    return 0;
}