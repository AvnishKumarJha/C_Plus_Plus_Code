// Debugging in codeblocks.

#include <iostream>
using namespace std;


int main()
{
    int sum=0;
    int A[]={1,2,5,8,9};

    for (auto X:A)
    {
        sum=sum+X;
    }
    cout<<sum;
    
    return 0;
}