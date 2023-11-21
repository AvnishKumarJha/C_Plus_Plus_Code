#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={2,5,87,98,1};
    int min,n=5;
    min=a[0];
    for(int i=0;i<5;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Minimum Element is "<<min;
    return 0;
}