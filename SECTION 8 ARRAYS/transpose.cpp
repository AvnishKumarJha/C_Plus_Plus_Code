#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3],c[3][3];

    cout<<"Enter the Elements of A Matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"Display the value of A Matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[j][i]=a[i][j];
        }
        cout<<endl;
    }

    cout<<"Tranpose of 2 Matrix are "<<endl;
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