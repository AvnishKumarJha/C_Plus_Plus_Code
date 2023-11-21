#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int MathMarks;
    int PhyMarks;
    int ChemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        MathMarks = m;
        PhyMarks = p;
        ChemMarks = c;
    }

    int total()
    {
        return MathMarks+PhyMarks+ChemMarks;
    }

    char Grade()
    {
        float average=total()/3;
        if (average >60)
        {
            return 'A';
        }
        else if (average>=40 && average<60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }

};

int main()
{
    int roll;
    string name;
    int m,p,c;

    cout<<"Enter Roll Number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student:";
    cin>>name;
    cout<<"Enter marks in 3 Subjects";
    cin>>m>>p>>c;

    Student s(roll,name,m,p,c);
    cout<<"Total Marks:"<<s.total()<<endl;
    cout<<"Grade of Student:"<<s.Grade()<<endl;

    return 0;
}