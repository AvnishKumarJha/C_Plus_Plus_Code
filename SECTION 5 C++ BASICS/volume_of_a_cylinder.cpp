#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    cout<<"Finding Volume of Cylinder"<<endl;
    float r,h,v;
    cout<<"Enter radius"<<endl;
    cout<<"Enter height"<<endl;
    cin>>r>>h;
    v=3.14*r*r*h;
    cout<<"Volume are:- "<<v;
    return 0;
}