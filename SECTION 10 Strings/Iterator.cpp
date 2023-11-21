#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="today";
    //string::iterator it;
    //string::reverse_iterator it;
    //for (it=str.begin();it!=str.end();it++)
    // for (it=str.rbegin();it!=str.rend();it++)
    // {
    //     cout<<*it;
    //     //*it=*it-32;
    // }
    //cout<<endl;
    //cout<<str;
    //cout<<endl;
    for (int i = 0; str[i]!='\0'; i++)
    {
        //cout<<str[i];
        str[i]=str[i]-32;
    }
    cout<<str;
    cout<<endl;
    return 0;
}