#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Welcome";
    // char str[10];
    // s.copy(str, s.length());
    // //s.copy(str,3);
    // //str[3]='\0';
    // cout<<str<<endl;
    // string str="How are you";
    // cout<<str.find("are")<<endl;
    // cout<<str.rfind('o')<<endl;
    string str="Hello World";
    cout<<str.find_first_of('l');
    cout<<str.find_first_of('l',4);
    cout<<endl;
    cout<<str.find_last_of("l"); 
    cout<<endl;
    return 0;
}