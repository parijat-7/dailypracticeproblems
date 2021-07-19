#include<iostream>
using namespace std;
int  main()
{
    int a;
    cout<<"Multiplication Table"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    for(int i=1;i<=10;i++)
    {
        cout <<a<<" X "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}
