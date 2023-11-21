#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int num;
    cout<<"Enter the Multiplication Table Number"<<endl;
    cin>>num;

    for (int i=1; i<=10; i++)
    {
        cout<<num<<"*"<<i<<"="<<i*num<<endl;
    }
    
    return 0;
}