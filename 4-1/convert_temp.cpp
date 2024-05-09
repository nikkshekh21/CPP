/*Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method*/
#include<iostream>
using namespace std;
class Attributes
{
	protected :
	float fehranheit;
	float celsius;
	float kelvin;
	public :
	void setdata()
	{
		cout<<"Enter the temperature in celsius:";
		cin>>celsius;
		cout<<endl<<endl<<"THE TEMPERATURE IN CELSIUS = "<<celsius<<endl;
		
	}

};

class Q : public Attributes
{
	public:
	void getdata()
	{
	    fehranheit  = (celsius*9)/5 ;
	    fehranheit=fehranheit+32;
	   

		
		
		
		cout<<endl<<endl<<"THE TEMPERATURE IN FEHRENHEITS = "<<fehranheit<<endl<<endl;
		
	}
};
class R :public Q
{
	public :
		void kelin()
		{
			kelvin=celsius+273.15;
			cout << "THE TEMPERATURE IN KELVIN = "<<kelvin <<endl;
		}
};