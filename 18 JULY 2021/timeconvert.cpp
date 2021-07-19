#include<iostream>
#include<string>
using namespace std;
void timeconvert(int n)
{
    bool flag;
    int hr=0;
    do
    {
        flag=false;
        if(n>=60)
        {
            hr++;
            n -=60;
            flag=true;
        }
    } 
    while (flag);
    cout<<"\nThe time is "<<hr<<" : "<<n<<endl;
}
int main()
{
    timeconvert(60);
    timeconvert(127);
    return 0;
}