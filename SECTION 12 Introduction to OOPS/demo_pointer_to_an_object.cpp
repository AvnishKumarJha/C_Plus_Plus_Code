#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    // Pointer to an Object in the Stack
    // Object Created in the Stack

    // Rectangle r1;
    // Rectangle *ptr;
    // ptr=&r1;
    // ptr->length=10;
    // ptr->breadth=5;
    // cout<<ptr->area()<<endl;
    // cout<<ptr->perimeter()<<endl;


    // pointer to an object in heap
    // Object Created in the heap

    Rectangle *ptr=new Rectangle;
    ptr->length=10;
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    return 0;
}