#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans1, ans3 = 0, ans4 = 0;
    string ans2;
    Reverse *r = new Reverse();
    Truckloads *t = new Truckloads();
    EfficientTruckloads *truck = new EfficientTruckloads();
    int num;
    if (!(cin >> num))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        ans1 = -1;
    }
    else
    {
        ans1 = r->reverseDigit(num);
    }
    string str;
    if (!(cin >> str))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        ans2 = "ERROR";
    }
    else
    {
        ans2 = r->reverseString(str);
    }
    int numCrates;
    int loadSize;
    if (!(cin >> numCrates))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        ans3 = -1;
        ans4 = -1;
    }
    if (!(cin >> loadSize))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        ans3 = -1;
        ans4 = -1;
    }
    if (!(ans3 == -1 || ans4 == -1))
    {
        ans3 = t->numTrucks(numCrates, loadSize);
        ans4 = truck->numTrucks(numCrates, loadSize);
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