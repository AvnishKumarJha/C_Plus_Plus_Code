// sum of factor of the number is double of the number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum of Factor is "<<sum<<endl;

    if (2*n==sum)
    {
        cout<<"Perfect Number"<<endl;
    }
    else
    {
        cout<<"Not a Perfect Number"<<endl;
    }
    
    
    
    return 0;
}