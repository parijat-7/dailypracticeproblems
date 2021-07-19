#include<iostream>
using namespace std;
void sumofnaturalnostill(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    cout<<"The required sum is "<<total<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number till which you want to find sum of natural nos.: ";
    cin>>n;
    sumofnaturalnostill(n);
    return 0;
}