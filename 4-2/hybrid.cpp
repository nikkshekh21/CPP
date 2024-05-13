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
		cout << "A : " <<a<<endl;
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
		cout << "B : " << b<<endl;
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
		cout << "c : " <<c <<endl;
	}

};

class D : public B,C  
{
    protected :
	int d,sum=0;

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
		sum = C::a++b+c+d;
		
		cout << "sum : " << sum;
	}

};
int main()
{
	A a1;
	a1.setdata();
	a1.getdata();

	B b1;
	b1.setdata1();
	b1.getdata1();
	
	C c1;
	c1.setdata2();
	c1.getdata2();
	
	D d1;
	d1.setdata3();
	d1.getdata3(); 
    d1.Sum();

   


    return 0;
}