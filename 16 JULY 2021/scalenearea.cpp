#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
    float side1,side2,ang1,area;
    cout<<"Enter the length of first side: "<<endl;
    cin>>side1; 
    cout<<"Enter the length of second side: "<<endl;
    cin>>side2; 
    cout<<"Enter the angle b/w the 2 sides: "<<endl;
    cin>>ang1; 
    area=(side1*side2*sin((PI/180)*ang1))/2;
    cout<<"The area of triangle is as follows: "<<area<<endl;

    return 0;
}