// Increment and Decrement Operator.
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int i=5,j;
    // i++;
    // ++i;
    // j=i++;
    // j=++i;
    //j=2* ++i + 2 * i++;
    j=2* i++ +2* i++;


    cout<<i<<" "<<j<<endl;

    return 0;
}