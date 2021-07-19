#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, s, n;
    cout<<"Enter the number of sides in the polygon: ";
    cin>>n;
    cout<<"Enter the length of each side : ";
    cin>>s;
    a=n*s*s/(4.0*tan(M_PI/n));
    cout<<"The area of the "<<n<<"-sided polygon is "<<a<<endl;
    return 0;
}