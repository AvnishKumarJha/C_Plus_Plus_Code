#include <iostream>
using namespace std;

int main() 
{
    int a[2][3];
    int b[2][3];
    int c[2][3];
    
    cout<<"Enter the element of A matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Display the Value of A matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the element of B matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Display all the value of B matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Substraction of A and B matrix are "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
} 