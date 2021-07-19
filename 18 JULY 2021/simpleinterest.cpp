#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter principle amount: Rs.";
    cin>>p;
    cout<<"Enter rate of interest: "<<endl;
    cin>>r;
    cout<<"Enter time : "<<endl;
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest is Rs. "<<si<<endl;
    return 0;
}    