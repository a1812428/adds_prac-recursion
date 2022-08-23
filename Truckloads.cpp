#include "Truckloads.h"
using namespace std;

int Truckloads::numTrucks(int numcrates, int loadSize)
{
    try
    {
        if (numcrates <= loadSize)
        {
            return 1;
        }
        return (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
    }
    catch (char *excp)
    {
        return -1;
    }
    catch (...)
    {
        return -1;
    }
}