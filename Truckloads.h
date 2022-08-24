#include <iostream>
using namespace std;
#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

class Truckloads
{
public:
    int numTrucks(int numcrates, int loadSize);
    string numTrucks(string numcrates, int loadSize);
    string numTrucks(int numcrates, string loadSize);
    string numTrucks(string numcrates, string loadSize);
};

#endif