#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    if(n>0)
    {
        cout<<"The number you entered is positive."<<endl;
    }
    else if(n<0)
    {
        cout<<"The number you entered is negative."<<endl;
    }
    else
    {
        cout<<"The number you entered is 0."<<endl;
    }
    return 0;
}