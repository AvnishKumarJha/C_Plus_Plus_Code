#include <bits/stdc++.h>
using namespace std;

void power(int base, int exponent)
{
    int result;
    result=pow(base,exponent);
    cout<<base<<" ^ "<<exponent<<" = "<<result;
}

int main()
{
    int base,exponent,result;
    cout<<"Enter the base "<<endl;
    cin>>base;
    cout<<"Enter the exponent "<<endl;
    cin>>exponent;
    power(base,exponent);
    
    return 0;
}