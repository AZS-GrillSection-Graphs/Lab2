#include <fstream>
#include <iostream>

#include "Graph.h"
#include "AdjacencyList.h"

Graph::Graph(const char * inputFileName) : m_graphRepr(NULL)
{
    std::ifstream inputFile;

    if (!inputFile.is_open())
    {
        inputFile.open(inputFileName, std::ios::in);

        if(!inputFile)
        {
            std::cerr << "Failed to open " << inputFileName << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    std::string validType;
    std::getline(inputFile, validType);
    try
    {
        if(validType != "LS")
            throw "Not known graph representation";
        m_graphRepr = new AdjacencyList(inputFile);
    }
    catch (const char * exceptionName)
    {
        std::cerr << exceptionName;
        exit(EXIT_FAILURE);
    }

    inputFile.close();
}

Graph::~Graph()
{
    delete m_graphRepr;
}

void Graph::Print() const
{
    m_graphRepr->Print();
}

void Graph::ConvertGraph() const {
    m_graphRepr->Convert();
}

void Graph::SaveToFile(const char *fileName) const {
    m_graphRepr->SaveToFile(fileName);
    m_graphRepr->Convert();
    std::string drawing = "python3 GraphVisualization.py MacierzIncydencji.txt";
    system(drawing.c_str());
}

void Graph::RelaxEdge() {
    m_graphRepr->RelaxEdge();
}

void Graph::RelaxEdge(const int edgeStart, const int edgeEnd) {
    m_graphRepr->RelaxEdge(edgeStart, edgeEnd);

}
