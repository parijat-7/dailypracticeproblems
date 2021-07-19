#include<iostream>
using namespace std;
int main()
{
    float b,l,a,p;
    cout<<"Calculating the area and perimeter of rectangle "<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle: "<<endl;
    cin>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"The area of rectangle is "<<a<<endl;
    cout<<"The perimeter of sphere is "<<p<<endl;
    return 0;
}