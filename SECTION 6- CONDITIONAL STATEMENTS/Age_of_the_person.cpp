#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int age;
    cout<<"Enter age ";
    cin>>age;
    if(age>=12 && age<=50)
    {
        cout<<"Young Age"<<endl;
    }
    else
    {
        cout<<"Old Age"<<endl;
    }
    return 0;
}