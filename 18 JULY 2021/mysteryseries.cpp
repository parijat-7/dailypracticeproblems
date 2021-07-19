#include <iostream>
using namespace std;
 
int main() 
{
    cout << "Print a mystery series:"<<endl;
	cout << "-------------------------"<<endl;
	cout << " The series are: "<<endl;;	
    int n = 1;
    while (n>=1) 
    {
        ++n;
        if ((n % 3) == 0)
        { 
            continue;
        }
        if (n == 50)
        {
            break;
        }
        if ((n % 2) == 0) 
        {
            n += 3;
        } 
        else 
        {
            n -= 3;
        }
        cout << n << " ";
    }
   cout << endl;
   return 0;
}
