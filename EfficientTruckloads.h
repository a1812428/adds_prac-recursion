#ifndef EFFICIENT_TRUCKLOADS_H
#define EFFICIENT_TRUCKLOADS_H

class EfficientTruckloads
{
public:
    int dp[10000][10000] = {0};
    int numTrucks(int numcrates, int loadSize);
};

#endif