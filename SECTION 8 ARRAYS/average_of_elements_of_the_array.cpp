// avg of sum of all elements of an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100];
    int n;
    int sum = 0, avg = 0.0;

    cout << "Enter the number of elements are " << endl;
    cin >> n;

    cout << "Enter the Elements of an Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Display all the Elements of A " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        cout << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        sum = sum + a[i];
    }
    avg = sum / n;
    cout<<"Average of Sum of the element of an array "<<endl;
    cout << avg;

    return 0;
}