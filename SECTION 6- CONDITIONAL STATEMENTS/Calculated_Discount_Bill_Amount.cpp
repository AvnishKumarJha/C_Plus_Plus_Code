#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int amount;
    float disamount;
    cout<< "Enter Amount"<<endl;
    cin>>amount;
    
    if (amount>=5000)
    {
        disamount=amount-amount*20/100.0;
        cout<<disamount;
    }
    else
    {
        if (amount>=2000 && amount<5000)
        {
            disamount=amount-amount*10/100.0;
            cout<<disamount;
        }
        else
        {
            disamount=amount-amount*5/100.0;
            cout<<disamount;
        }
    }
    return 0;
}