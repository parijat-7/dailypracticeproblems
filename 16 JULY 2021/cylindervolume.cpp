#include<iostream>
using namespace std;
int main()
{
    float r,h,v;
    cout<<"Calculating the volume of cylinder "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter the radius of cylinder: "<<endl;
    cin>>r;
    cout<<"Enter the height of cylinder: "<<endl;
    cin>>h;
    v=3.1416*r*r*h;
    cout<<"The volume of cylinder is "<<v<<endl;
    
    return 0;
}