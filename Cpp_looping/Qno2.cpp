#include<iostream>
using namespace std;
int main()
{
    int num , factorial = 1;
    cin>>num;
    if (num<0)
    {
        cout<<"Error! Factorial of a negative number";
    }
    
    for(int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout<<factorial;
    return 0;
}