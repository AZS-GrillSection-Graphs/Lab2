#include <iostream>
#include <RandomSimpleGraph.h>
#include "SimpleGraph.h"
#include "RandomEulerGraph.h"
#include "RandomKRegularGraph.h"

int main() {
//    std::string inputString("5 4 4 3 2 2 2");
    std::string inputString("4 4 4 4 4 4");
//
    std::cout << "Is the string a graphic series? " << SimpleGraph::IsGraphicSeries(inputString) << std::endl;
    SimpleGraph simpleGraph(inputString);
    simpleGraph.SaveToFile("ListaSasiedztwa.txt");
    simpleGraph.DoesHamiltonCycleExist();
    simpleGraph.DrawGraph();

//    std::cout << "RANDOM SIMPLE GRAPH\n";
//    RandomSimpleGraph randomSimpleGraph(inputString);
//    randomSimpleGraph.SaveToFile("ListaSasiedztwa.txt");
//    randomSimpleGraph.DrawGraph();


//    srand(time(0));
//    RandomEulerGraph randomEulerGraph;
//    randomEulerGraph.SaveToFile("ListaSasiedztwa.txt");
//    randomEulerGraph.EulerCycle();
//    randomEulerGraph.Print();
//    randomEulerGraph.DrawGraph();

//    srand(time(0));
//    RandomKRegularGraph kRegularGraph;
//    kRegularGraph.SaveToFile("ListaSasiedztwa.txt");
//    kRegularGraph.Print();
//    kRegularGraph.DrawGraph();
//
//    Graph biggestComponent = kRegularGraph.BiggestComponent();
//    biggestComponent.SaveToFile("ListaSasiedztwa.txt");
//    biggestComponent.Print();
//    biggestComponent.DrawGraph();

    return 0;
}