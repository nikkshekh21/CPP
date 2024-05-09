/* Write a Program to perform four different numbers’ sum by inheriting constructors in hybrid inheritance.*/
#include<iostream>
using namespace std;

class A
{
    protected :
	int a;

	public :
	
	void setdata()
	{
		cout << "Enter a : ";
		cin >> a;
	}
	void getdata()
	{
		cout << "A : " <<a;
	}
};

class B : public A
{
    protected :
	int b;

	public :
	
	void setdata1()
	{
		cout << "Enter B : ";
		cin >> b;
	}
	void getdata1()
	{
		cout << "B : " << b;
	}
		

};

class C : public A
{
    protected :
	int c;

	public :
	
	void setdata2()
	{
		cout << "Enter c : ";
		cin >> c;
	}
	void getdata2()
	{
		cout << "c : " <<c;
	}

};

class D : public B , C
{
    protected :
	int d;
	int sum = 0;

	public :
	
     void setdata3() 
	{
        cout << "Enter d : ";
        cin >> d;
    }

    void getdata3() {
  
        cout << "d : " << d << endl;
    }

	void Sum()
	{
		sum = B::a+ b+ c+ d;
		cout << "sum : " << sum;
	}

};
int main()
{
    D d1;

   
    d1.Sum();

   


    return 0;
}
