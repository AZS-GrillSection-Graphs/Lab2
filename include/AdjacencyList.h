#ifndef LAB1_ADJACENCYLIST_H
#define LAB1_ADJACENCYLIST_H

#include <vector>
#include <string>


#include "GraphRepresentation.h"

class AdjacencyList : public GraphRepresentation
{
public:
    explicit AdjacencyList(const int verticesNumber);
    explicit AdjacencyList(std::ifstream &inputFile);
    void Print() const override;
private:
    std::vector<std::vector<int> > m_adjList;
};

#endif
