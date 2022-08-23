#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    int num;
    cin >> num;
    string str;
    cin >> str;
    int numCrates;
    cin >> numCrates;
    int loadSize;
    cin >> loadSize;
    Reverse *r = new Reverse();
    Truckloads *t = new Truckloads();
    EfficientTruckloads *truck = new EfficientTruckloads();
    cout << r->reverseDigit(num) << " " << r->reverseString(str) << " " << t->numTrucks(numCrates, loadSize) << " " << truck->numTrucks(numCrates, loadSize);

    return 0;
}