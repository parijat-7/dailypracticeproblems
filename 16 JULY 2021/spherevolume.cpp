#include<iostream>
using namespace std;
int main()
{
    int r;
    float v;
    cout<<"Calculating the volume of sphere "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter the radius of sphere: "<<endl;
    cin>>r;
    v=(4*3.1416*r*r*r)/3;
    cout<<"The volume of sphere is "<<v<<endl;
    
    return 0;
}