/*Write a Program to create a class to read and add two distances.
For example,
Input:
input1 => feet: 8, inch: 16
input2 => feet: 4, inch: 14

Output:
14 feet 6 inch*/
#include<iostream>
using namespace std;

class add 
{
    
    private :
    int fet1;
    int fet2;
    int in1;
    int in2;
    int last,count=0,first,first1;


    
public : 
void data()
{
    cout<<"Enter the feet size: ";
    cin>>fet1;
    cout<<"Enter the inch size: ";
    cin>>in1;
    cout<<"Enter the feet size: ";
    cin>>fet2;
    cout<<"Enter the inch size: ";
    cin>>in2;

}
void getdata()
{

    first = fet1+fet2 ;
    first1 = in1+in2 ;
    while(first1/12)
    {
        first1 -= 12;
        count++;
    }
    last = first + count;
    cout << last <<":" <<first1;
    
}

};

