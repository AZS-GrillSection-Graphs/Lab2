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
    void MakeConnectBetween(const int firstVertex, const int secondVertex) override;
    bool AreVerticesConnected(const int firstVertex, const int secondVertex) const override;
    void RelaxEdge(int edgeStart, int edgeEnd) override;
    void RelaxEdge() override;
    void SaveToFile(const char *fileName) const override;
    void Convert() const override;
    GraphRepresentation * BiggestComponent() override;
    std::vector< std::vector<int> > & GetAdjList() {return m_adjList;}
private:
    void BiggestComponent_R(const int componentNumber, const int index, std::vector <int> & componentsOfVerticles);
    virtual int IndexOfBiggestComponent(const std::vector <int> componentsOfVerticles) const override;
    void RemoveOtherComponents(const std::vector<int> &componentsOfVerticles, const int indexOfBiggestComponent, AdjacencyList *biggestComponent) const;
    void DeleteEdge(const int firstVertex, const int secondVertex);
    std::string m_initials;

    std::vector< std::vector<int> > m_adjList;
};

#endif
