#include<iostream>
using namespace std;
int main()
{
    int n , odd=0 , even=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        odd=odd+i;
    }
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        even=even+i;
    }
    cout<<odd<<' '<<even;
    return 0;
}