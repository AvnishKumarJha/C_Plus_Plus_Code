#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x1,x2,y1,y2,dist;
    cout<<"Calculate distance between two point"<<endl;
    cout<<"Enter x1 "<<endl;
    cout<<"Enter x2 "<<endl;
    cout<<"Enter y1 "<<endl;
    cout<<"Enter y2 "<<endl;
    cin>>x1>>x2>>y1>>y2;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"Distance between two point are :-  "<<dist;

    return 0;
}