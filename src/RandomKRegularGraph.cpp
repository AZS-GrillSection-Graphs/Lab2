//
// Created by os8 on 22.04.18.
//

#include "RandomKRegularGraph.h"
#include <cstdlib>
#include <iostream>
#include <string>

std::string RandomKRegularGraph::GenerateKRegularGraphNumberSeries() {
    std::string numberSeries;
    int numberOfVerticles = 1;
    int degreeOfVerticles = 1;

    while(numberOfVerticles % 2 && degreeOfVerticles % 2) {
        numberOfVerticles = rand() % 20 + 1;                   //limitation for tests
        degreeOfVerticles = rand() % numberOfVerticles;
    }

    for(int i = 0; i < numberOfVerticles; i++) {
        numberSeries += std::to_string(degreeOfVerticles);
            numberSeries += " ";
    }

    return numberSeries;
}
