/*Write a Program to create an Employee Record System using the Class & Object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_salary
- emp_city
- emp_experience
- emp_company_name
*/#include<iostream>
using namespace std;
class employee
{
    private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    float emp_experience;
    string emp_company_name;
public:
void emp_setdata()
{
    int i,size;
    for(i=0;i<size;i++)
    {
     
    cout<<"Enter employee id: ";
    cin>>emp_id;
    cout<<"Enter employee name: ";
    cin>>emp_name;
    cout<<"Enter employee age: ";
    cin>>emp_age;
    cout<<"Enter employee role: ";
    cin>>emp_role;
   cout<<"Enter employee salary: ";
    cin>>emp_salary;
    cout<<"Enter employee city: ";
    cin>>emp_city;
    cout<<"Enter employee experience: ";
    cin>>emp_experience;
    cout<<"Enter employee company name: ";
    cin>>emp_company_name;
    }

    

}
public:
void emp_getdata()
{
    cout<<"EMPLOYEE ID :"<<emp_id<<endl;
    cout<<"EMPLOYEE NAME :"<<emp_name<<endl;
    cout<<"EMPLOYEE AGE :"<<emp_age<<endl;
    cout<<"EMPLOYEE ROLE :"<<emp_role<<endl;
    cout<<"EMPLOYEE SALARY :"<<emp_salary<<endl;
    cout<<"EMPLOYEE CITY :"<<emp_city<<endl;
    cout<<"EMPLOYEE EXPERIENCE :"<<emp_experience<<endl;
    cout<<"EMPLOYEE COMPANY NAME :"<<emp_company_name<<endl;


}
};

