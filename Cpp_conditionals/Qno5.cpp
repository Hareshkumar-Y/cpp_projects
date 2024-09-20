#include<iostream>
using namespace std;
int main()
{
    int C,D,L,tl;
    cin>>C>>D>>L;
    tl= (C+D)*2;
    if(tl==L)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}