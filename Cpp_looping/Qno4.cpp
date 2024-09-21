#include<iostream>
using namespace std;
int main()
{
    int n ,sum=0,i;
    cin>>n;
    for(i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}