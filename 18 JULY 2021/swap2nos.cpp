#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"Enter another number: "<<endl;
    cin>>b;
    cout<<"Before swapping A = "<<a<<endl;
    cout<<"Before swapping B = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping A = "<<a<<endl;
    cout<<"After swapping B = "<<b<<endl;
    return 0;
}