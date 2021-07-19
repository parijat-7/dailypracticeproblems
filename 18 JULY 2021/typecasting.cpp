#include<iostream>
using namespace std;
int main()
{
    int a=8,b=12;
    cout<<"Testing explicit type casting"<<endl;
    cout<<a/b<<endl;
    cout<<(double)a/b<<endl;
    cout<<a/(double)b<<endl;
    cout<<(double)(a/b)<<endl;
    double c=5.5,d=6.6;
    cout<<"Testing implicit type casting"<<endl;
    cout << (int)c / b << endl;    
   cout << (int)(c / b) << endl;   
    cout <<"\nint implicitly casts to double: \n";
   c = a;    
   cout << c << endl;  
    cout<<"double truncates to int!: \n";
   b = d;            
   cout << b << endl; 
    return 0;
}