#include<iostream>
using namespace std;
int main()
{
    int c,d,l,tl;
    cin>>c>>d>>l;
    tl= (c+d)*2;
    if(tl==l)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}