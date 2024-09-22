#include<iostream>
using namespace std;
int main()
{
    int n, a=0,b=1,i=2;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(i<n)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
    }
    return 0;
}