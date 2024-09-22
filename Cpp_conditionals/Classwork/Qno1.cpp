#include<iostream>
using namespace std;
int main()
{
    int age,gen;
    cin>>age>>gen;
    gen=toupper(gen);
    if(age<25 && gen == 1)
    {
        cout<<"Group 1";
    }
    else if(age<25 && gen == 2)
    {
        cout<<"Group 2";
    }
    else if (age>=25 && age<=45 && gen==1)
    {
        cout<<"Group 3";
    }
    else if (age>=25 && age<=45 && gen==2)
    {
        cout<<"Group 4";
    }
    else if (age>45 && (gen==1 || gen==2))
    {
        cout<<"Group 5";
    }
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}