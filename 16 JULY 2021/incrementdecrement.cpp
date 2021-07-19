#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=57;
    cout<<"The operation of pre and post increment and decrement "<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"The number is "<<num<<endl;
    num++;
    cout<<"After post increment the number is "<<num<<endl;
    ++num;
    cout<<"After pre increment the number is "<<num<<endl;
    num=num+1;
    cout<<"After increasing the number by 1 the number is "<<num<<endl;
    num--;
    cout<<"After post decrement the number is "<<num<<endl;
    --num;
    cout<<"After pre decrement the number is "<<num<<endl;
    num=num-1;
    cout<<"After decreasing the number by 1 the number is "<<num<<endl;
    return 0;
}