#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Using For Loop
    // string str="Today";
    // int count=0;
    // for (int i=0; str[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // cout<<"Length of a string are "<<count<<endl;
    //Using iterator 
    string str="WELCOME";
    string::iterator it;
    int count=0;
    for (it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;
}