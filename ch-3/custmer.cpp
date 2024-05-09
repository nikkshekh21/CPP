/*Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
- cust_id
- cust_name
- cust_age
- cust_city
- cust_mobile_number
- cust_simcard_validity (in years)
- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)*/
#include<iostream>
#include<string.h>

using namespace std;

class Customer
{
    private:
        int id;
 	    char name[100];
 		int age;
 		char telecome_brand_name[100];
		int mobile_number;
		char simcard_validity[100];
		char city[100];

	public :
		void setdata()
		{
			cout<<"Enter your id :- ";
			cin>>id;
			cout<<"Enter your name :- ";
			cin>>name;
			cout<<"Enter your age :- ";
			cin>>age;
			cout<<"Enter your telecome brand name :- ";
			cin>>telecome_brand_name;
			cout<<"Enter your mobile number :- ";
			cin>>mobile_number;
			cout<<"Enter your city :-";
			cin>>city;
			cout<<"Enter your simcard validity :- ";
			cin>>simcard_validity;
			cout<<"-----------------------"<<endl;
		}

		void getdata()
		{
			cout<<"ID :- "<<id<<endl<<"NAME :- "<<name<<endl<<"AGE :- "<<age<<endl<<"telecome brand name :- "<<telecome_brand_name<<endl<<"mobile number :- "<<mobile_number<<endl<<"CITY :- "<<city<<endl<<"simcard validity :- "<<simcard_validity<<endl;	
		}
};

int main()
{
	 int i,size;
    cout<<"Enter number of Customer: ";
    cin>>size;
    Customer e[size];
     
     
    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for Customer:- " << i + 1 << ":" << endl;
        e[i].setdata();
    }
    cout << endl << "Customer Record details:-" << endl<<endl;
    for(i=0;i<size;i++)
    {
        e[i].getdata();
    }
    return 0;   
}