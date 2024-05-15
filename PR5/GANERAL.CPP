/* Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	char alpha;
	cout<<"Enter the value :";
	cin>>n;
	
	try
	{
		if(n >= 'A' || n <= 'Z' && n >= 'a' || n <= 'z')
		{
			//
	         cout <<endl<<"YOUR VALUE IS  ALPHABATE!!. "<<endl;
		}
		else if(n>=0&&n<=9)
		{
			throw 1;
		}
		else
		{
		 cout << "NO VALUE IS DECLARED" << endl;
			
		}
	}
	/*catch (char alpha)
	{
		cout <<endl<<"YOUR VALUE IS  ALPHABATE!!. "<<endl;
	}*/
	catch (int M)
	{
		cout <<endl<<"YOUR VALUE IS  NUMBER!!. "<<endl;
	}
	
	catch (...)
	{
		cout <<"GENERAL EXCEPTIN!"<<endl;
    }
	return 0;
	

}
