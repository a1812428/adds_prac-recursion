#include "EfficientTruckloads.h"
using namespace std;

int EfficientTruckloads::numTrucks(int numcrates, int loadSize)
{
    if (numcrates <= loadSize)
    {
        return 1;
    }
    return (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
}