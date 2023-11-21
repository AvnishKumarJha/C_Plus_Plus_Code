#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Before Swap the value of a and b"<<endl;
    cout<<a<<endl<<b;
    
    temp=a;
    a=b;
    b=temp;
    
    cout<<endl;
    cout<<"After Swap the value of a and b"<<endl;
    cout<<a<<endl<<b;

    return 0;
}