#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c,f;
    cout<<"Temperature converter "<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the temperature in fahrenheit: "<<endl;
    cin>>f;
    c=5*(f-32)/9;
    cout<<"The temperature fahrenheit is "<<f<<endl;
    cout<<"The temperature in celsius is "<<c<<endl;

    return 0;
}