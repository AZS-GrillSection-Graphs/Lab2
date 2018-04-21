#ifndef GRAPHS2_SIMPLEGRAPH_H
#define GRAPHS2_SIMPLEGRAPH_H

#include <string>
#include "Graph.h"

class SimpleGraph : public Graph{
public:
    explicit SimpleGraph(std::string  numberSeries);
    static bool IsGraphicSeries(std::string stringToCheck);

private:
    static std::vector<int> getNumbers(const std::string numberSeries);

    void ConvertFromNumberSeries(std::vector<int> &vertexLinks);
};


#endif //GRAPHS2_SIMPLEGRAPH_H
