#include"emp.cpp"
using namespace std;
int main()
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

}