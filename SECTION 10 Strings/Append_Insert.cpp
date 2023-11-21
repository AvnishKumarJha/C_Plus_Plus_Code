#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string str="Hello";
    string str="How you";
    // cout<<str.capacity()<<endl;
    // str.append(" world");
    // cout<<str.capacity()<<endl;
    // cout<<str.length()<<endl;
    //str.insert(3,"KK");
    str.insert(3," are");
    str.insert(3," area",4);
    cout<<str<<endl;
    return 0;
}