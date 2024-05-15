/*Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote. Also,
 handle that thrown exception and print you are not eligible to vote.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your age :";
	cin>>n;
	
	try
	{
		if(n<18)
		{
			throw 0;
		}
		else
		{
			cout<<endl<<"YOU ARE ELIGIBLE TO VOTE !!."<<endl;
		}
	}
	catch (int N)
	{
		cout <<endl<<"YOU ARE NOT ELIGIBLE TO VOTE !!. "<<18-n<<endl;
	}
	catch (...)
	{
		cout <<"GENERAL EXCEPTIN!"<<endl;
    }
	return 0;
	

}