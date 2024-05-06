#include<iostream>
using namespace std;
class A
{
	protected:
	int id;
	string name;
	string role;
	double salary;
	double experience;
	string comp_name;
	string address;
	string email;
	double contact;
	
	public:
		void emp1()
		{
			cout<<"Enter Employee id : ";
			cin>>id;
			cout<<"Enter Employee name : ";
			cin>>name;
			cout<<"Enter Employee role : ";
			cin>>role;
		}	
};
class B : public A
{
	public:
	void emp2()
	{
		cout<<"Enter Employee salary : ";
		cin>>salary;
		cout<<"Enter Employee experience : ";
		cin>>experience;
	}
	
};
class C : public A
{
	public:
	void emp3()
	{
		cout<<"Enter Employee company name : ";
		cin>>comp_name;
		cout<<"Enter Employee address : ";
		cin>>address;
	}
	public:
	void getemp()
	{
		cout<<endl<<endl<<"THE EMP DETAILE"<<endl;
		
		cout<<"EMPLOYEE NAME :"<<name<<endl;
		cout<<"EMPLOYEE ROLE :"<<role<<endl;
		cout<<"EMPLOYEE SALARY :"<<salary<<endl;
	}
	
};

class D : public A
{
	public:
	void emp4()
	{
		cout<<"Enter Employee Email : ";
		cin>>email;
		cout<<"Enter Employee contact : ";
		cin>>contact;
	}
	public:
	void getemp2()
	{
		
		cout<<"EMPLOYEE ID :"<<id<<endl;
		cout<<"EMPLOYEE NAME :"<<name<<endl;
		cout<<"EMPLOYEE ROLE :"<<role<<endl;
		cout<<"EMPLOYEE SALARY :"<<salary<<endl;
		cout<<"EMPLOYEE EXPERIENCE :"<<experience<<endl;
		cout<<"EMPLOYEE COMPNY NAME :"<<comp_name<<endl;
		cout<<"EMPLOYEE ADDRESS :"<<address<<endl;
		cout<<"EMPLOYEE EMAIL :"<<email<<endl;
		cout<<"EMPLOYEE CONTACT :"<<contact<<endl;
	
	}
	
};

int main()
{
//	A a1;
	B a2;
	C a3;
	D a4;
	a2.emp1();
	a2.emp2();
	a3.emp3();
	
	a4.emp4();
	a3.getemp();
	a4.getemp2();
	return 0;
}