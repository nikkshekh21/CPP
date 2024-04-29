/*Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040*/
#include<iostream>
using namespace std;
int main()
{
    int f,s,i;
     cout<<"Enter the first number:";
     cin>>f;
     cout<<"Enter the second number:";
     cin>>s;
        for(i=f;i<=s;i++)
        {
          if(f%4==0)
          {
            cout<<f<<","<<"\t";
            
          }
          f++;
        }
        return 0;

}