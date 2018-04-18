#include "SimpleGraph.h"
#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>


SimpleGraph::SimpleGraph(std::string &numberSeries) {
    try{
        if(!IsGraphicSeries(numberSeries))
            throw "Provided number series is not a graphic series!";
    }catch(const char * exceptionText) {
        std::cerr << exceptionText << std::endl;
        exit(EXIT_FAILURE);
    }

    std::vector<int> vertexLinks = getNumbers(numberSeries);
    std::sort(vertexLinks.begin(), vertexLinks.end(), std::greater<int>());

    const int verticesNumber = static_cast<const int>(vertexLinks.size());
    m_graphRepr = new AdjacencyList(verticesNumber);

    for(int i=0; i < verticesNumber; ++i) {
        int index = i+1;
        if(i < verticesNumber-1) {
            while (vertexLinks[i] > 0) {
                while (m_graphRepr->AreVerticesConnected(i, index) || vertexLinks[index] == 0)
                    ++index;
                if ( index < verticesNumber ) {
                    --vertexLinks[index];
                    m_graphRepr->MakeConnectBetween(i, index);
                } else {
                    --vertexLinks[i];
                    m_graphRepr->MakeConnectBetween(i, i);
                    RelaxEdge(i, i);
                }
                --vertexLinks[i];
            }
        } else {
            while(vertexLinks[i] > 0)
            {
                --vertexLinks[i];
                --vertexLinks[i];
                m_graphRepr->MakeConnectBetween(i, i);
                RelaxEdge(i, i);
            }
        }

    }
    Print();
}

bool SimpleGraph::IsGraphicSeries(std::string &stringToCheck) {
    std::stringstream stream(stringToCheck);
    std::vector<int> seriesToCheck = getNumbers(stringToCheck);

    std::sort(seriesToCheck.begin(), seriesToCheck.end(), std::greater<int>());

    while(true) {
        if(*seriesToCheck.begin() == 0 && *(--seriesToCheck.end()) == 0)
            return true;

        if(*seriesToCheck.begin() >= seriesToCheck.size() || *(--seriesToCheck.end()) < 0)
            return false;

        int degreeOfVertex = seriesToCheck[0];
        for(int i = 1; i <= degreeOfVertex; ++i)
            --seriesToCheck[i];
        seriesToCheck[0] = 0;

        std::sort(seriesToCheck.begin(), seriesToCheck.end(), std::greater<int>());
    }
}

std::vector<int> SimpleGraph::getNumbers(const std::string &numberSeries) {
    std::stringstream stream(numberSeries);
    std::vector<int> vertexLinks;

    int number;
    while(stream >> number) {
            vertexLinks.push_back(number);
    }
    return vertexLinks;
}
