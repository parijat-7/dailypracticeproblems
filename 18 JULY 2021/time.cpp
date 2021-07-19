#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{

time_t t = time(NULL);
tm* tPtr = localtime(&t);
cout << "Display the Current Date and Time :"<<endl;
cout << "----------------------------------------\n";
cout << " Seconds = " << (tPtr->tm_sec) << endl;
cout << " Minutes = " << (tPtr->tm_min) << endl;
cout << " Hours = " << (tPtr->tm_hour) << endl;
cout << " Day of month = " << (tPtr->tm_mday) << endl;
cout << " Month of year = " << (tPtr->tm_mon)+1 << endl;
cout << " Year = " << (tPtr->tm_year)+1900 << endl;
cout << " Weekday = " << (tPtr->tm_wday )<< endl;
cout << " Day of year = " << (tPtr->tm_yday )<< endl;
cout << " Daylight savings = " <<(tPtr->tm_isdst )<< endl;
cout << endl;
return 0;
}            