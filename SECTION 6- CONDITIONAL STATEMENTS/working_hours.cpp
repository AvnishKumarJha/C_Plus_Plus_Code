#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int hour;
    cout<<"Enter hours";
    cin>>hour;
    if(hour>=9 && hour<=18)
    {
        cout<<"Working";
    }
    else
    {
        cout<<"Leisure";
    }
    return 0;
}