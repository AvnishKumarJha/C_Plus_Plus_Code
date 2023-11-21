#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public :
    float l,b;
    int area()
    {
        return l*b;
    }
    
    int p()
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle r;
    
    Rectangle *p;
    p=&r;
    p->l=2;
    p->b=3;
    cout<<"Area of the Rectangle "<<p->area()<<endl;
    cout<<"Perimeter of the Rectangle "<<p->p()<<endl;

    return 0;
}