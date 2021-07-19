#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    float avg;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the third number: "<<endl;
    cin>>c;
    cout<<"Enter the fourth number: "<<endl;
    cin>>d;
    avg=(a+b+c+d)/4.0;
    cout<<"The average of the 4 given numbers is "<<avg<<endl;

    return 0;
}