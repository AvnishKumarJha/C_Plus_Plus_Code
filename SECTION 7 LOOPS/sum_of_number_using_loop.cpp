#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first n natural number"<<sum<<endl;
    
    return 0;
}