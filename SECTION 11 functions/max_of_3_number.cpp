#include <iostream>
using namespace std;

void display()
{
    cout<<"Hello World"<<endl;
}

int max(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main() {
    display();
    
    int a=10,b=20,c=30,r;
    r=max(a,b,c);
    cout<<c<<endl;
    
    return 0;
}