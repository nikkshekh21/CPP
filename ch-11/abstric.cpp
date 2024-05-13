/* Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.*/
#include<iostream>
using namespace std;
class Admin
{
	protected:
    static string company_name;
    int manager_salary;
    int employee_salary;
    static int total_staff;
    double total_annual_revenue;
    string can_terminate;
    
    public:
    
		void setmanager_salary(int msalary)
    	{
    	     manager_salary=msalary;
		}
		void setemployee_salary(int esalary)
    	{
    	     employee_salary=esalary;
		}
	
		void settotal_annual_revenue(int revenue)
    	{
    	     total_annual_revenue=revenue;
		}
		void setcan_terminate(string terminate)
    	{
    	     can_terminate=terminate;
		}
		void getCompanyName()
    {
        cout << "Company name: " << company_name << endl;
    }
    void getMngSalary()
    {
        cout << "Manager salary: " << manager_salary << endl;
    }
    void getEmpSalary()
    {
        cout << "Emp salary: " << employee_salary << endl;
    }
   	void gettotal_staff()
   	{
        cout << "Total staff: " << total_staff << endl;
	}
	void gettotal_annual_revenue()
   	{
         cout << "Total annual revenue: " << total_annual_revenue << endl;
	}
	void getcan_terminate()
   	{
    	  cout << " can terminate: " << can_terminate << endl;
	}

	
};
	string Admin::company_name="THE PAAKI";
	int Admin::total_staff=40;
class Manager : Admin
{
public:
    void setEmpSlry(int esalary)
    {
        setemployee_salary(esalary);
    }
   
	  void setcantrmnt(string terminate)
   	{
    	 setcan_terminate(terminate);
	}

    void getEmpSlry()
    {
        getEmpSalary();
    }
    void gett_staff()
   	{
    	gettotal_staff();
	}
  
	void getcantrmnt()
   	{
         getcan_terminate();
	}
	string Admin::can_terminate="emp1";
};

class Employee : Manager
{
public:
    void getSalary()
    {
        getEmpSlry();
    }
      void getstaff()
   	{
       gett_staff();
	}
};

int main()
{
	Manager m;
	m.setEmpSlry(15000);

	m.getEmpSlry();
	//m.setcantrmnt();
	m.getcantrmnt();
	Employee e;
	e.getSalary();
	e.getstaff();
	
	
	return 0;
}