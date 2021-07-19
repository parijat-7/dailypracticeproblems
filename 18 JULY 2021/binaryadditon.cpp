#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	long b1,b2;
	int i=0, r=0;
	int sum[20]; 
    cout <<"Addition of two binary numbers:"<<endl;
	cout <<"-----------------------------------"<<endl;
	cout <<"Enter the 1st binary number: ";
	cin>> b1;
	cout <<"Enter the 2nd binary number: ";
	cin>> b2;
  while (b1 != 0 || b2 != 0) 
  {
   sum[i++] = (int)((b1 % 10 + b2 % 10 + r) % 2);
   r = (int)((b1 % 10 + b2 % 10 + r) / 2);
   b1 = b1 / 10;
   b2 = b2 / 10;
  }
  if (r != 0) 
  {
   sum[i++] = r;
  }
  --i;
  cout<<"The sum of two binary numbers is: ";
  while (i >= 0) 
  {
   cout<<(sum[i--]);
  } 
  
  return 0;
 }  
