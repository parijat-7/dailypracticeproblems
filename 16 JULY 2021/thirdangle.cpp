#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Finding the third angle in a triangle"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Enter first angle of triangle: "<<endl;
    cin>>a;
    cout<<"Enter the second angle of triangle: "<<endl;
    cin>>b;
    c=180-b-a;
    cout<<"The third angle in a triangle is "<<c<<endl;

    return 0;
}