#include <bits/stdc++.h>
using namespace std;
void  sum(int a, int b)
{
    cout<<"Sum = "<<(a+b)<<endl;
}
void sum(int a, int b, int c)
{
    cout<<"Sum = "<<(a+b+c)<<endl;
}
void sum(double a, double b)
{
    cout<<"Sum = "<<(a+b)<<endl;
}
int main()
{
    sum(12,14);
    sum(12,13,34);
    sum(2.3,3.4);
    
    return 0;
}