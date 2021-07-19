#include<iostream>
using namespace std;
int main()
{
    int num=3,i,count,sum=2,n,isprime=1;
    cout<<"Enter n to find sum of first n prime numbers: "<<endl;
    cin>>n;
    if(n>=1)
    {
        for(count=2;count<=n;)
        {
            for(i=2;i<=(num-1);i++)
            {
                if(num%i==0)
                {
                    isprime=0;
                    break;
                }
            }
            if(isprime>=1)
            {
                sum +=num;
                count++;
            }
        isprime=1;
        num++;
        }
    }
    
    cout<<"Sum of first "<<n<<" prime numbers is "<<sum<<endl;
return 0; 
}