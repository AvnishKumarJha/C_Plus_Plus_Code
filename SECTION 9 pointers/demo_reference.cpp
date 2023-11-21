#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=10;
    int &y=x;
    int b=20;
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout<<&x<<endl<<&y;
    return 0;
}