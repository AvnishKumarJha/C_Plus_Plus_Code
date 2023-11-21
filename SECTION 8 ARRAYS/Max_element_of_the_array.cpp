#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[5]={4,8,6,9,5};
    int n=5,max;
    max=a[0];
    for (int i=0; i<5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum Number is "<<max;
    
    return 0;
}