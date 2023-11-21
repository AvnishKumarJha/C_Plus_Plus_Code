#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,sum=0,m;
    cout<<"Enter n"<<endl;
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (m==sum)
        cout<<"Number is Palindrome.";
    
    else
        cout<<"Number is not a Palindrome.";

    return 0;
}