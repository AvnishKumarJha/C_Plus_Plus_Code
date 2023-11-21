#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,r,rev=0;
    cout<<"Enter a number";
    cin>>n;

    while (n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        switch (r)
        {
        case 1:
            cout<<"One"<<endl;
            break;
        
        case 2:
            cout<<"Two"<<endl;
            break;

            case 3:
            cout<<"Three"<<endl;
            break;
        
        }
    }
    cout<<rev<<endl;
    
    return 0;
}