#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter 3 Number" << endl;
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        cout << x;
    }
    else
    {
        if (y>z)
        {
            cout<<y;
        }
        else
        {
            cout<<z;
        }
    }
    

    return 0;
}