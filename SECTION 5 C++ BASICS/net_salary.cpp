#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    float basic,percentAllow,percentDeduct,netSalary;
    cout<<"Enter Basic Salary:"<<endl;
    cout<<"Enter Percent of Allowances:"<<endl;
    cout<<"Enter percent of Deductions:"<<endl;
    cin>>basic>>percentAllow>>percentDeduct;

    netSalary=basic+basic*percentAllow/100-basic*percentDeduct/100;
    
    cout<<"\nNet Salary is : "<<netSalary;

    return 0;
}