#include <iostream>
using namespace std;


int main()
{
    string name;
    cout<<"May I Know Your name\n";
    // cin>>name;
    getline(cin,name);
    cout<<"Welcome Mr."<<name;
    return 0;
}