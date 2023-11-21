#include <bits/stdc++.h>
using namespace std;
void display()
{
    cout<<"Hello World"<<endl;
}
float add(float p, float q)
{
    float g;
    g=p+q;
    return g;
}
int maxim(int a,int b, int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    display();
    float p=2.3,q=7.9,g;
    g=add(p,q);
    cout<<g<<endl;
    int x=10,y=15,z=5,r;
    r=maxim(x,y,z);
    cout<<r<<endl;
    return 0;
}