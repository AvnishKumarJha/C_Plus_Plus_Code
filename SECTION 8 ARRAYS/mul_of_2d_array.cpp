#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3]={0};

    cout<<"Enter First Matrix Elements "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter Number in Pocket ["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    cout<<"First Matrix is ...."<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter Second Matrix Elements "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter Number in Pocket ["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }
    cout<<"Second Matrix is ...."<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"Multiplication of two Matrix is......"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}