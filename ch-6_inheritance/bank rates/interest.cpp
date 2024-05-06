/*Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes
*/
#include<iostream>
using namespace std;
class interest
{
	protected:
	float RBI = 7;

	
	
	public:
	void rate1()
	{

		cout<<"RBI RATE OF INTEREST : "<<RBI<<endl;
	   	
	}
	

};
class interest2 : public interest
{
	protected :
	 float SBI = RBI+1.5;
	 
	 public :
	 void  rate2()
	 {
	 	cout<<"SBI RATE OF INTEREST :"<<SBI<<endl;
	 }
};
class interest3 : public interest
{
	protected:
	float BOB = RBI+1.25;
	public: 
	 void  rate3()
	 {
	 	cout<<"BOB RATE OF INTEREST :"<<BOB<<endl;
	 }
};
class interest4 : public interest
{
	protected:
	float ICICI = RBI+1.75;
	public: 
	 void  rate4()
	 {
	 	cout<<"ICICI RATE OF INTEREST :"<<ICICI<<endl;
	 }
};


	
