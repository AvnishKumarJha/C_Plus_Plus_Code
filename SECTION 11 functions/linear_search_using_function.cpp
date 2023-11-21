#include <bits/stdc++.h>
using namespace std;
int Search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
            return i;
        return 0;
    }
}
int main()
{
    int a[]={2, 4, 5, 7, 10, 9, 13};
    int k;
    cout << "Enter an Element to be Searched: ";
    cin >> k;
    int index = Search(a, 7, k);
    cout << "Element found at index :" << index << endl;
    return 0;
}