#include<iostream>
using namespace std;

class employee {
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
    void emp_setdata() {
        cout << "Enter employee id: ";
        cin >> emp_id;
        cout << "Enter employee name: ";
        cin >> emp_name;
        cout << "Enter employee age: ";
        cin >> emp_age;
        cout << "Enter employee role: ";
        cin >> emp_role;
        cout << "Enter employee salary: ";
        cin >> emp_salary;
        cout << "Enter employee city: ";
        cin >> emp_city;
        cout << "Enter employee experience: ";
        cin >> emp_experience;
        cout << "Enter employee company name: ";
        cin >> emp_company_name;
    }

    void emp_getdata() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Experience: " << emp_experience << endl;
        cout << "Employee Company Name: " << emp_company_name << endl;
        cout << endl;
    }
};

int main() {
    int i, size;
    cout << "Enter number of employees: ";
    cin >> size;
    employee a[size];

    for (i = 0; i < size; i++) {
        cout << endl << "Enter details for employee " << i + 1 << ":" << endl;
        a[i].emp_setdata();
    }

    cout << endl << "Employee details:" << endl;
    for (i = 0; i < size; i++) {
        a[i].emp_getdata();
    }

    return 0;
}