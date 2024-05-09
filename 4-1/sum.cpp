/*Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods
*/
#include<iostream>
using namespace std;
class Attributes
{
	protected :
	int a;
	int b;
	int c;
	int sum;
};

class Y : public Attributes
{
	public :
	void setdata()
	{
		cout<<"Enter the value of A:";
		cin>>a;
		cout<<"Enter the value of B:";
		cin>>b;
		cout<<"Enter the value of C:";
		cin>>c;
	}
	void getdata()
	{
		int sum;
		a=a*a*a;
		b=b*b*b;
		c=c*c*c;
		sum=a+b+c;
		cout<<endl<<"The cubes of all";
		cout<<"The cube of a="<<a<<endl;
		cout<<"The cube of b="<<b<<endl;
		
		cout<<"The cube of c="<<c<<endl;
		cout<<endl<<endl<<"THE SUM OF A,B,C="<<sum<<endl;
		
	}
};
