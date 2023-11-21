#include <bits/stdc++.h>
#define N 10
using namespace std;


int main()
{
    int a[N];
    int p=0;
    int n=0,z=0;

    cout<<"Enter Numbers"<<endl;
    for (int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<N; i++)
    {
        if (a[i]>0)
        {
            p++;
        }
        else if (a[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    cout<<"Positive Number "<<p<<endl<<"Negative number "<<n<<endl<<"Zero "<<z<<endl;
    
    
    
    return 0;
}