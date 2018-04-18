#ifndef LAB1_GRAPHREPRESENTATION_H
#define LAB1_GRAPHREPRESENTATION_H


class GraphRepresentation
{
public:
    virtual void Print() const = 0;
    virtual void MakeConnectBetween(const int firstVertex, const int secondVertex) = 0;
    virtual bool AreVerticesConnected(const int firstVertex, const int secondVertex) const = 0;
    virtual void RelaxEdge(const int edgeStart, const int edgeEnd) = 0;
    virtual void RelaxEdge() = 0;
    virtual void SaveToFile(const char *fileName) const = 0;
    virtual void Convert() const = 0;
    virtual ~GraphRepresentation() = default;
};

#endif //LAB1_GRAPHREPRESENTATION_H
