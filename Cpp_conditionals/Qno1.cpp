#include<iostream>
using namespace std;
int main()
{
    int age ;
    char gen;
    cin>>age>>gen;
    gen=toupper(gen);
    if(age<25 && gen == 'M')
    {
        cout<<"Group 1";
    }
    else if(age<25 && gen == 'F')
    {
        cout<<"Group 2";
    }
    else if (age>=25 && age<=45 && gen=='M')
    {
        cout<<"Group 3";
    }
    else if (age>=25 && age<=45 && gen=='F')
    {
        cout<<"Group 4";
    }
    else if (age>45 && (gen=='M' || gen=='F'))
    {
        cout<<"Group 5";
    }
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}