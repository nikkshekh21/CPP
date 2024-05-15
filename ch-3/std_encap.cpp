/* Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity*/
#include<iostream>
#include<string.h>

using namespace std;

class Customer
{
    private:
        int cafe_id;
        string cafe_name;
        string cafe_type; 
        int cafe_rating; 
        string cafe_location; 
        int cafe_establish_year;
        int  cafe_staff_quantity;

	public :
		void setdata()
		{
			cout<<"Enter cafe id :- ";
			cin>>cafe_id;
			cout<<"Enter cafe name :- ";
			cin>>cafe_name;
			cout<<"Enter cafe type :- ";
			cin>>cafe_type;
			cout<<"Enter cafe rating  :- ";
			cin>>cafe_rating;
			cout<<"Enter cafe  location :- ";
			cin>>cafe_location;
			cout<<"Enter cafe establish year  :-";
			cin>>cafe_establish_year;
			cout<<"Enter cafe staff quantity  :- ";
			cin>>cafe_staff_quantity;
			cout<<"-----------------------"<<endl;
		}

		void getdata()
		{
			cout<<"ID :- "<<cafe_id<<endl<<"NAME :- "<<cafe_name<<endl<<"TYPE :- "<<cafe_type<<endl<<"RATING :- "<<cafe_rating<<endl<<"LOCATION :- "<<cafe_location<<endl<<"ESTABLISH YEAR :- "<<cafe_establish_year<<endl<<"STAFF QUANTITY :- "<<cafe_staff_quantity<<endl;	
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
        cout << endl << "Enter details for CAFE:- " << i + 1 << ":" << endl<<endl;
        e[i].setdata();
    }
    cout << endl << "CAFE Record details:-" << endl<<endl;
    for(i=0;i<size;i++)
    {
        e[i].getdata();
    }
    return 0;   
}

