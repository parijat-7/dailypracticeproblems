#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Temperature converter "<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the temperature in celsius: "<<endl;
    cin>>c;
    f=(9*c/5)+32;
    cout<<"The temperature celsius is "<<c<<endl;
    cout<<"The temperature in fahrenheit is "<<f<<endl;

    return 0;
}