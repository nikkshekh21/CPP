/*  Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.*/
#include<iostream>
using namespace std;
class number
{
	public:
	int num;

	
	
	public:
	void rate1()
	{

		cout<<"Enter any number to find square and cube : ";
		cin>>num;
	   	
	}
	

};
class square : public number
{
	
     public:
	 int sqr = num*num;
	 
	 public :
	 void  rate2()
	 {
	 	cout<<"THE SQUARE OF YOUR NUMBER :"<<sqr<<endl;
	 }
};
class cube : public number
{
	public:
	int cubes = num*num*num;
	public: 
	 void  rate3()
	 {
	 	cout<<"THE SQUARE OF YOUR NUMBER :"<<cubes<<endl;
	 }
};
int main()
{
	number n1;
	square n2;
	cube   n3;
	
	n1.rate1();
	n2.rate2();
	n3.rate3();
	
	return 0;
}
	

