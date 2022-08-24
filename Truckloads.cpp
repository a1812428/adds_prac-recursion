#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numcrates, int loadSize)
{
    try
    {
        if (numcrates <= 0 || loadSize <= 0)
        {
            return 0;
        }
        if (numcrates <= loadSize)
        {
            return 1;
        }
        return (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
    }
    catch (char *excp)
    {
        return 0;
    }
    catch (...)
    {
        return 0;
    }
}