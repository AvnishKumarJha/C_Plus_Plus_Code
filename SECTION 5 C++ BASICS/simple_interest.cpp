#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float p,r,t,si;
    cout<<"Calculate Simple Interest"<<endl;
    cout<<"Enter Principal Value"<<endl;
    cout<<"Enter Rate Value"<<endl;
    cout<<"Enter Time Value"<<endl;
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple Interest :- "<<si;
    return 0;
}