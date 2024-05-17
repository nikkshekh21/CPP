#include<iostream>
using namespace std;
class car
{
    private:
    int car_speed;
    string  car_model;
    int car_release_year;
    public:  
    void setdata()
    
    {
       
       int i,size;
       for(i=0;i<size;i++)
       {
      
        cout<<"Enter the model : ";
        cin>>car_model;
          cout<<"Enter the car speed: ";
        cin>>car_speed;
        cout<<"Enter the release year: ";
        cin>> car_release_year;

    }
        
    }
    	public:
    void getdata()
    
    {
    
      cout<<"CAR MODEL:"<<car_model<<endl;
      cout<<"CAR speed:"<<car_speed<<endl;
      cout<<"CAR RELEASE YEAR:"<<car_release_year<<endl;



    }
};
int main()
{
    int i,size;
    cout<<"Enter number of car detail.: ";
    cin>>size;
     car c[size];

    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for car " << i + 1 << ":" << endl<<endl;
        c[i].setdata();
    }
     cout<<endl<<"---------------------------"<<endl;
    cout << endl << "car details:" << endl<<endl;
    for(i=0;i<size;i++)
    {
        c[i].getdata(); 
    }
    return 0;

} 



    