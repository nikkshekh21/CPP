/* Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format.
For example,
Input:
Enter seconds: 4520

Output:
1:15:20*/
#include<iostream>
using namespace std;

int main()
{
    int hour,i,totalhour;
    int second,sec,h, minutes;
    cout << " Enter the seconds: " ;
    cin >> hour;
    
      totalhour=hour/3600;
      hour%=3600;
      minutes = hour/60;
      hour%=60;
      cout<<"Your seconds is convert it into HH:MM:SS = ";
      cout<<totalhour<<":"<<minutes<<":"<<hour;
   
    return 0;
} 

    
    
