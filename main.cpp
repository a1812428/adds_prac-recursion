#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    int ans1, ans3 = -1, ans4 = -1;
    string ans2;
    Reverse *r = new Reverse();
    Truckloads *t = new Truckloads();
    EfficientTruckloads *truck = new EfficientTruckloads();
    int num;
    if (cin >> num)
    {
        ans1 = r->reverseDigit(num);
    }
    else
    {
        ans1 = -1;
    }
    string str;
    if (cin >> str)
    {
        ans2 = r->reverseString(str);
    }
    else
    {
        ans2 = "ERROR";
    }
    int numCrates;
    int loadSize;
    if (cin >> numCrates)
    {
    }
    else
    {
        ans3 = -1;
        ans4 = -1;
    }
    if (cin >> loadSize)
    {
        ans3 = t->numTrucks(numCrates, loadSize);
        ans4 = truck->numTrucks(numCrates, loadSize);
    }
    else
    {
        ans3 = -1;
        ans4 = -1;
    }

    cout << ans1 << " " << ans2 << " ";
    if (ans3 == -1)
    {
        cout << "ERROR"
             << " "
             << "ERROR";
    }
    else
    {
        cout << ans3 << " " << ans4;
    }

    return 0;
}