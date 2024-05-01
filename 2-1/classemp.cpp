#include"emp.cpp"
using namespace std;
int main()
{
    int i,size;
    cout<<"Enter number of employee: ";
    cin>>size;
    employee e[size];

    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for employee " << i + 1 << ":" << endl;
        e[i].emp_setdata();
    }
    cout << endl << "Employee details:" << endl<<endl;
    for(i=0;i<size;i++)
    {
        e[i].emp_getdata();
    }
    return 0;

}