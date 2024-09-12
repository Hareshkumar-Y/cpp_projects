#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, u, v, i, j, k, x, y, z;
    
    cin >> a >> b >> c>> u>> v>> i>> j>> k;
    x = a + b * 5 / 4 + c % 3 * 5;
    y = u>v ? u : v ;
    z = ++i&& ++j&& ++k;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
}