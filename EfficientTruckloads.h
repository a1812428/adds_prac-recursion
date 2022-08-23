#ifndef EFFICIENT_TRUCKLOADS_H
#define EFFICIENT_TRUCKLOADS_H

class EfficientTruckloads
{
public:
    static int dp[10005][10005];
    int numTrucks(int numcrates, int loadSize);
};

#endif