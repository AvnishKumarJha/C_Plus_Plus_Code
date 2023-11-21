#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    cout<<"Enter 2 Number"<<endl;
    cin>>m>>n;
    
    while (m!=n)
    {
        if (m>n)
        {
            m=m-n;
        }
        else if (n>m)
        {
            n=n-m;
        }
    }
    cout<<m;
    
    return 0;
}