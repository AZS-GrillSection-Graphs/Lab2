#include <iostream>
#include <RandomSimpleGraph.h>
#include "SimpleGraph.h"
#include "RandomEulerGraph.h"
#include "RandomKRegularGraph.h"

int main() {
    std::string inputString("5 4 4 3 2 2 2");

//    std::cout << "Is the string a graphic series? " << SimpleGraph::IsGraphicSeries(inputString) << std::endl;
//    SimpleGraph simpleGraph(inputString);
//    simpleGraph.SaveToFile("ListaSasiedztwa.txt");
//    simpleGraph.DrawGraph();

//    std::cout << "RANDOM SIMPLE GRAPH\n";
//    RandomSimpleGraph randomSimpleGraph(inputString);
//    randomSimpleGraph.SaveToFile("ListaSasiedztwa.txt");
//    randomSimpleGraph.DrawGraph();

//    Graph biggestComponent = simpleGraph.BiggestComponent();
//    biggestComponent.SaveToFile("ListaSasiedztwa.txt");
//    biggestComponent.Print();
//    biggestComponent.DrawGraph();

//    srand(time(0));
//    RandomEulerGraph randomEulerGraph;
//    randomEulerGraph.SaveToFile("ListaSasiedztwa.txt");
//    randomEulerGraph.EulerCycle();
//    randomEulerGraph.Print();
//    randomEulerGraph.DrawGraph();

    srand(time(0));
    RandomKRegularGraph kRegularGraph;
    kRegularGraph.SaveToFile("ListaSasiedztwa.txt");
    kRegularGraph.Print();
    kRegularGraph.DrawGraph();

    return 0;
}