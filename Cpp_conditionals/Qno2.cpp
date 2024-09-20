#include<iostream>
using namespace std;
int main()
{
    int m ,p , c;
    cin>>m>>p>>c;
    int t = m+p+c;
    if(m>=65 && p>=55 && c>=50 && t>=180)
    {
        cout<<"Eligible";
    }
    else
    {
        cout<<"Not Eligible";
    }
    return 0;
}