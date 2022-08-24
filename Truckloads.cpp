#include "Truckloads.h"
#include<iostream>
using namespace std;

int Truckloads::numTrucks(int numcrates, int loadSize)
{
    try
    {
        if (numcrates <= 0 || loadSize <= 0)
        {
            return -1;
        }
        if (numcrates <= loadSize)
        {
            return 1;
        }
        return (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
    }
    catch (char *excp)
    {
        cout << "ERROR";
        return -1;
    }
    catch (...)
    {
        cout << "ERROR";
        return -1;
    }
}