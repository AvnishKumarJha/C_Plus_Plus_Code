#include <bits/stdc++.h>
#include <forward_list>
#include <stdio.h>
using namespace std;


int main()
{
    forward_list<int> v={2,4,6,8,10};
    v.push_front(20);
    v.push_front(30);
    
    // v.pop_back();

    forward_list<int>::iterator itr;
    
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
