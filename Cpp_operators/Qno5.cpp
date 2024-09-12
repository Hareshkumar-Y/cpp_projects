#include<iostream>
using namespace std;
int main()
{
    float odoa , odob ,remuneration ;
    int rate = 25.0;
    cin>>odoa>>odob;
    remuneration = (odob - odoa)*rate;
    cout<<(odob-odoa)<<'\t'<<remuneration;
    return 0;
}