#ifndef GRAPHS2_GRAPH_H
#define GRAPHS2_GRAPH_H

#include <string>
#include "GraphRepresentation.h"


class Graph
{
public:
    explicit Graph(const char * inputFileName);
    explicit Graph() {};
    ~Graph();
    void Print() const;
    int NumberOfComponents() const;
    Graph& BiggestComponent() const;

private:
    std::string m_reprType;
    GraphRepresentation * m_graphRepr;
};

#endif
