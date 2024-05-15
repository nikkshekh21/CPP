#include<iostream>
using namespace std;
int main()
{
	string n,pass;
	int count=0,a;
	cout<<"Enter the password :";
	cin>>n;
	int len=0,i;
		
       	while (n[len] != '\0') {
            	len++;
       	}
		try
		{
			for(i = 0; i <= a; i++)
	    	{
		        if(n[i]>='a'&&n[i]<='z')
		        {
		             throw pass;
				}
				else
	          	{
	 	        	cout<<endl<<"YOUR PASSWORD IS CARRECT !! "<<endl;
	        	}
	    	}
		}
		
	catch (string pass)
	{
		cout <<endl<<" YOUR PASSWORD IS MUST BE IN UPPERCASE PLEASE TRY AGAIN ---!!!"<<endl;
	}

	return 0;

}