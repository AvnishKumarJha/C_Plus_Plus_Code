#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int age;
    cout<<"Enter Age"<<endl;
    cin>>age;
    if(age<12 || age>50)
    {
        cout<<"Eligible of Offer"<<endl;
    }
    else
    {
        cout<<"Not Eligible"<<endl;
    }
    return 0;
}