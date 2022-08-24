#include "EfficientTruckloads.h"
#include <iostream>
using namespace std;

int EfficientTruckloads::dp[10005][10005] = {0};

int EfficientTruckloads::numTrucks(int numcrates, int loadSize)
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
        if (dp[numcrates][loadSize] != 0)
        {
            return dp[numcrates][loadSize];
        }
        return dp[numcrates][loadSize] = (numTrucks(numcrates / 2, loadSize) + numTrucks((numcrates + 1) / 2, loadSize));
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