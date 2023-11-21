#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    cout<<"Menu"<<endl;
    cout<<"1.Add"<<endl<<"2.Sub"<<endl<<"3.Mul"<<endl<<"4.Div"<<endl;

    int option;
    cout<<"Enter Your Choice"<<endl;
    cin>>option;
    int a,b,c;
    cout<<"Enter 2 Number"<<endl;
    cin>>a>>b;

    switch (option)
    {
    case 1: c=a+b;
        break;

        case 2: c=a-b;
        break;

        case 3: c=a*b;
        break;

        case 4: c=a/b;
        break;

    }
    cout<<"Result is "<<c<<endl;
    
    return 0;
}