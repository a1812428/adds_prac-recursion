#include "EfficientTruckloads.h"
using namespace std;

int EfficientTruckloads::numTrucks(int numcrates, int loadSize)
{
    if (numcrates <= loadSize)
    {
        return 1;
    }
    if (dp[numcrates][loadSize] != 0)
    {
        return dp[numcrates][loadSize];
    }
    return dp[numcrates][loadSize] = (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
}