/* Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value :";
	cin>>n;
	
	try
	{
		if((n >= 'A' || n <= 'Z') && (n >= 'a' || n <= 'z'))
		{
	         cout <<endl<<"YOUR VALUE IS  ALPHABATE!!. "<<endl;
		}
		else 
		{
			throw 1;
		}
	
	}
	catch (int m)
	{
		cout <<endl<<"YOUR VALUE IS  NUMBER!!. "<<endl;
	}
	
	catch (...)
	{
		cout <<"GENERAL EXCEPTIN!"<<endl;
    }
	return 0;
	

}
