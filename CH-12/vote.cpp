#include<iostream>
using namespace std;
int main()
{
	int n,age;
	cout<<"Enter your age :";
	cin>>n;
	
	try
	{
		if(n<18||n>=80)
		{
			throw age;
		}
		else
		{
			cout<<"YOU CAN VOTE!! "<<endl;
		}
	}
	catch (int age)
	{
		cout <<"YOU CANNOT VOTE WAIT FOR AGE "<<18-n<<endl;
	}
	catch (...)
	{
		cout <<"GENERAL EXCEPTIN!"<<endl;

	return 0;
}
}