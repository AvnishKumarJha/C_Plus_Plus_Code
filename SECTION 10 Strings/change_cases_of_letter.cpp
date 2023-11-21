#include <bits/stdc++.h>
using namespace std;
int main()
{
    // upper cases to lower cases.
    // string str="WELCOME";
    // for (int i=0;str[i]!='\0';i++)
    // {
    //     if (str[i]>=65 && str[i]<=90)
    //     {
    //     str[i]=str[i]+32;
    //     }
    // }
    // cout<<str<<endl; 

    // lower to upper cases
    string str="welcome";
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    return 0;
}