#include<iostream>
using namespace std;
int main()
{
    float r,a,c;
    cout<<"Calculating area and perimeter of circle "<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    a=3.1416*r*r;
    c=2*3.1416*r;
    cout<<"The area of the circle is "<<a<<endl;
    cout<<"The circumference of the circle is "<<c<<endl;
    return 0;
}