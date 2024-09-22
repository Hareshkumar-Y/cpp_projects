#include<iostream>
using namespace std;
int main()
{
    char gen;
    cin>>gen;
    switch (gen)
    {
        case 'm':
        case 'M':
        cout<<"Male";
        break;
        case 'f':
        case 'F':
        cout<<"Female";
        break;
        default:
        cout<<"Invalid input";
    }
    return 0;
}