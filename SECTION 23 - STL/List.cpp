#include <bits/stdc++.h>
#include <list>
#include <stdio.h>
using namespace std;


int main()
{
    list<int> v={2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);
    
    // v.pop_back();

    list<int>::iterator itr;
    
    // 2 Method
    // 1) Iterator
    cout<<"Using Iterator"<<endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
    {
        //cout<<*itr<<endl;
        cout<<++*itr<<endl;
    }

    //  2) Loop
    cout<<"Using For each Loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }


    return 0;
}
