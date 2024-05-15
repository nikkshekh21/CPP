/*1 Write a Program to implement exception handling mechanism for different types of scenarios:
- a number cannot be divided by zero
- a person cannot be able to vote if his/her age is less than 18
- a password cannot be validated if it doesn’t contains an uppercase letter*/
#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter first number :";
	cin>>n;
	cout<<"Enter second number :";
	cin>>a;
	try
	{
		if(a==0)
		{
			throw 1;
		}
		else
		{
			cout<<"The divition ans: "<<n/a<<endl;
		}
	}
	catch (double n)
	{
		cout <<"CANNOT DIVIDE BY ZERO!"<<endl;
	}
	catch (...)
	{
				cout <<"GENERAL EXCEPTIN!"<<endl;

	return 0;
}
}