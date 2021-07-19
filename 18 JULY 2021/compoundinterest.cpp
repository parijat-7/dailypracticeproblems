#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    float p,r,t,a,ci;	
	cout<<"Enter the principle amount : Rs. ";
	cin>>p;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	cout<<"Enter the timme: ";
	cin>>t;
    a=p*pow((1+r/100),t);	
    ci=p*pow((1+r/100),t)-p;	
    cout<<"The compound interest is: Rs. "<<ci<<endl;    
	cout<<"The total amount is: Rs. "<<a<<endl;    
    return 0;
}
