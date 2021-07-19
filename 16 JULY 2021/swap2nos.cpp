#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Before swapping the first number is "<<a<<endl;
    cout<<"Before swapping the second number is "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping the first number is "<<a<<endl;
    cout<<"After swapping the second number is "<<b<<endl;
    return 0;
}