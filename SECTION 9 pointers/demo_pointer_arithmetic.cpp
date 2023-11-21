#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={2,4,6,8,10};
    // int *p=a;
    int *p=a,*q=&a[4];

    // cout<<*p<<endl;
    // p++;
    // cout<<*p<<endl;
    // p--;
    // cout<<*p<<endl;

    // cout<<p<<endl;
    // cout<<p+2<<endl;

    // cout<<*p<<endl;
    // cout<<*(p+2)<<endl;

    // cout<<p<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<endl;
    //     cout<<i[a]<<endl;
    //     cout<<*(a+i)<<endl;
    //     cout<<a+i<<endl;
    //     cout<<p+i<<endl;
    //     cout<<*(p+i)<<endl;
    //     cout<<p[i]<<endl;
    //     cout<<*p<<endl;
    //     p++;
    // }
    // cout<<p<<endl;


    cout<<q-p;
    cout<<p-q;

    return 0;
}