
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,count=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        cout<<"Its a prime Number"<<endl;
    }
    else
    {
        cout<<"Not a Prime Number"<<endl;
    }
    
    
    
    return 0;
}