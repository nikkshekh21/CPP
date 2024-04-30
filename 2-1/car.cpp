 /*Write a Program to create a Car Record System using the Class & Object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year*/
#include<iostream>
using namespace std;
class car
{
    private:
    int car_id;
    string car_company_name;
    string car_color;
    string  car_model;
    int car_release_year;
    void car_setdata()
    {
        
       int i,size;
       for(i=0;i<size;i++)
       {
        cout<<"Enter the car id: ";
        cin>>car_id;
        cout<<"Enter the company name : ";
        cin>>car_company_name;
        cout<<"Enter the color : ";
        cin>>car_color;
        cout<<"Enter the model : ";
        cin>>car_model;
        cout<<"Enter the release year: ";
        cin>> car_release_year;

    }
        
    }
    void car_getdata()
    {
        cout<<"CAR ID:"<<car_id<<endl;
         cout<<"CAR COMPANY NAME:"<<car_company_name<<endl;
        cout<<"CAR COLOR:"<<car_color<<endl;
        cout<<"CAR MODEL:"<<car_model<<endl;
        cout<<"CAR RELEASE YEAR:"<<car_release_year<<endl;



    }
};
int main()
{
    int i,size;
    cout<<"Enter number of car detail.: ";
    cin>>size;
     car a[size];

    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for car " << i + 1 << ":" << endl;
        a[i].car_setdata();
    }
    cout << endl << "car details:" << endl<<endl;
    for(i=0;i<size;i++)
    {
        a[i].car_getdata(); 
    }
    return 0;

} 



    