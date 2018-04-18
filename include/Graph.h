#ifndef GRAPHS2_GRAPH_H
#define GRAPHS2_GRAPH_H

#include <string>
#include "AdjacencyList.h"


class Graph
{
public:
    explicit Graph(const char * inputFileName);
    explicit Graph() {};
    ~Graph();
    void Print() const;
    void ConvertGraph() const;
    void SaveToFile(const char *fileName) const;
    void RelaxEdge();
    void RelaxEdge(const int edgeStart, const int edgeEnd);
    int NumberOfComponents() const;
    Graph& BiggestComponent() const;

protected:
    GraphRepresentation * m_graphRepr;
};

#endif
