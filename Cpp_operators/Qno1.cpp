// c++ attendance percentage calculator with only 2 float points.(number of days present).
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