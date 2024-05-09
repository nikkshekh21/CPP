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
	int contact;
	
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
class C : public B
{
	public:
	void emp3()
	{
		cout<<"Enter Employee company name : ";
		cin>>comp_name;
		cout<<"Enter Employee address : ";
		cin>>address;
	}
	
	void getemp()
	{
		cout<<endl<<endl<<"THE EMP DETAILE"<<endl<<endl;
		
		cout<<"EMPLOYEE NAME :"<<name<<endl;
		cout<<"EMPLOYEE ROLE :"<<role<<endl;
		cout<<"EMPLOYEE SALARY :"<<salary<<endl;
	}
	
};

class D : public C
{
	public:
	void emp4()
	{
		cout<<endl<<"Enter Employee Email : ";
		cin>>email;
		cout<<"Enter Employee contact : ";
		cin>>contact;
	}
	public:
	void getemp2()
	{
		cout<<endl<<endl<<"THE EMP DETAILE"<<endl<<endl;
		cout<<"EMPLOYEE ID :"<<id<<endl;
		cout<<"EMPLOYEE NAME :"<<name<<endl;
		cout<<"EMPLOYEE ROLE :"<<role<<endl;
		cout<<"EMPLOYEE SALARY :"<<salary<<endl;
		cout<<"EMPLOYEE EXPERIENCE :"<<experience<<endl;
		cout<<"EMPLOYEE COMPNY NAME :"<<comp_name<<endl;
		cout<<"EMPLOYEE ADDRESS :"<<address<<endl;
		cout<<"EMPLOYEE EMAIL :"<<email<<endl;
		cout<<"EMPLOYEE CONTACT :"<< contact <<endl;
	
	}
	
};

int main()
{
//	A a1;
	D d;
	d.emp1();
	d.emp2();

	d.emp3();
	d.getemp();
	d.emp4();
	
	d.getemp2();
	return 0;
}