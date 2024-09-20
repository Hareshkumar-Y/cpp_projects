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
        cout<<"Male"<<endl;
        break;
        case 'f':
        case 'F':
        cout<<"Female"<<endl;
        break;
    }
    return 0;
}