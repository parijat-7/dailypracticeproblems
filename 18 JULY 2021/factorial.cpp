#include<iostream>
using namespace std;
long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number to know its factorial: "<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}