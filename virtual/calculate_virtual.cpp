/*Write a Program to perform some basic mathematical operations using an Abstract class such like:
- the area of a circle
- the area of a triangle
- the area of a rectangle
- use one single pure virtual function named calculate() to perform all the above operations*/
#include<iostream>
using namespace std;
class calculate
{
	public:
	virtual void circle()=0;
	calculate()
	{
			int r,b,h,l,w;
		double area,area2,area3;
		int n;
	cout<<"Enter your choice for areas: ";
	cin>>n;
		switch(n)
		{
			
		
	case 1:
		cout<<"Enter the Radius of circel: ";
		cin >>r;
		area=3.14*r*r;
		cout<<endl<<endl<<"THE AREA OF A CIRCEL: "<<area<<endl;
		break;
	case 2:
		cout<<"Enter the base  of triangle: ";
		cin >>b;
		cout<<"Enter the height   of triangle: ";
		cin >>h;
		area2=0.5*b*h;
		cout<<endl<<endl<<"THE AREA OF A TRIANGLE: "<<area2<<endl;	
		break;
	case 3:
		cout<<"Enter the length of rectangle: ";
		cin >>l;
		cout<<"Enter the width  of rectangle: ";
		cin >>w;
		area3=w*l;
		 cout<<endl<<endl<<"THE AREA OF A RECTANGLE: "<<area3<<endl;
		break;
		default:
    			{
    				cout<<"---:please try again:---";
    			
				}
			}
	
		
	
       	
       
      	
		
		
	}
};
class allarea:public calculate
{

    public: 
	void circle()
{
	
		

};

	public:
	void alarea()
	{
    
    
			
	}
};
int main()
{
	allarea a;
	a.circle();
	a.alarea();
}