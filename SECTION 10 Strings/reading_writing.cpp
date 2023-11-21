#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char s[20];
    // cout<<"Enter your Name"<<endl;
    // //cin>>s;
    // //cin.get(s,20);
    // cin.getline(s,20);
    // cout<<"Welcome "<<s<<endl;
    char s1[100];
    char s2[100];
    cout<<"Enter your Name "<<endl;
    cin.get(s1,100);
    cout<<"Welcome "<<s1<<endl;
    cin.ignore();
    cout<<"Enter your Name Again ";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;
    return 0;
}