#include <sstream>
#include <fstream>
#include <iostream>
#include "AdjacencyList.h"


AdjacencyList::AdjacencyList(std::ifstream &inputFile)
{
    std::vector<std::vector <int> >row;
    std::string line;

    while(getline(inputFile, line))
    {
        std::istringstream streamLine(line);
        std::vector<int> col;

        while(!streamLine.eof())
        {
            int value;
            streamLine >> value;

            if(streamLine.fail())
                break;

            col.push_back(value);
        }

        m_adjList.push_back(col);
    }
}

void AdjacencyList::Print() const
{
    const int verticesNumber = m_adjList.size();
    for(int i = 0; i < verticesNumber; ++i)
    {
        const int linksNumber = m_adjList[i].size();
        for(int j = 0; j < linksNumber; ++j)
        {
            std::cout << m_adjList[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
