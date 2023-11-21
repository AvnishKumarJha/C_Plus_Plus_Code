#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    cout<<"Before Swapping the value of a and b are "<<endl<<a<<endl<<b<<endl;
    
    swap(a, b);
    cout<<"After Swapping the value of a and b are "<<endl<<a<<endl<<b;
    
    
    return 0;
}