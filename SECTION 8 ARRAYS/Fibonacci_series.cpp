#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=-1,b=1,c;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
    return 0;
}