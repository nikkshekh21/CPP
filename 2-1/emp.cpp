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
void emp_getdata()
{
    cout<<"employee ID:"<<emp_id<<endl;
    cout<<"employee name:"<<emp_name<<endl;
    cout<<"employee age:"<<emp_age<<endl;
    cout<<"employee role:"<<emp_role<<endl;
    cout<<"employee salary:"<<emp_salary<<endl;
    cout<<"employee city:"<<emp_city<<endl;
    cout<<"employee experience:"<<emp_experience<<endl;
    cout<<"employee company name:"<<emp_company_name<<endl;


}
};
/*int main()
{
    int i,size;
    cout<<"Enter number of employee: ";
    cin>>size;
    employee a[size];

    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for employee " << i + 1 << ":" << endl;
        a[i].emp_setdata();
    }
    cout << endl << "Employee details:" << endl<<endl;
    for(i=0;i<size;i++)
    {
        a[i].emp_getdata();
    }
    return 0;

}*/
