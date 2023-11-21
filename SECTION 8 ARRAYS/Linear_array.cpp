#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],n=5,key,i;

    cout<<"Enter the Numbers"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Key"<<endl;
    cin>>key;
    
    for (int i=0; i<n; i++)
    {
        if (key==a[i])
        {
            cout<<"Key Found at "<<i;
            return 0;
        }
    }
    cout<<"Key is not Found.";

    return 0;
}