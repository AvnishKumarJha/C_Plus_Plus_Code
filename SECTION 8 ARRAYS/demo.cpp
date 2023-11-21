#include <iostream>
using namespace std;

int main() {
    int a[2][3],b[2][3],c[2][3]={0};
    
    cout<<"Enter the Elements of First Matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"Display the Elements of First Matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the Elements of Second Matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }
    
    cout<<"Display the Elements of Second Matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"Multiplication of 2 Matrix are "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}