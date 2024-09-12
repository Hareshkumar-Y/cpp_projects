#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float ad , wd , ap ;
    cin>>wd>>ad;
    ap = (ad/wd)*100;
    cout<<trunc(ap)<<'%';
    return 0;
}