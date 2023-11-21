#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char s1[10]="235";
    // char s2[10]="54.78";
    // long int x=strtol(s1,NULL,10);
    // float y=strtof(s2,NULL);
    // cout<<x<<endl<<y<<endl;
    // cout<<x+10<<endl<<y<<endl; //Perform Arithmetic operations.
    // cout<<x+10<<endl<<y-5<<endl; // perform Arithmetic operations.
    char s1[20]="x=10;y=20;z=35";
    //cout<<strtok(s1,"=;")<<endl;
    char *token=strtok(s1,"=;");
    while (token!=NULL) 
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}