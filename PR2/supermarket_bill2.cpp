/* Write a Program to make Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number*/
#include <iostream>
#include <string.h>

using namespace std;

class GroceryItem {

	public:
    int itemNum;
    string itemName;
    double itemPrice;
    string itemUnit;

    GroceryItem(int number, string name, double price, string unit) 
	{
        itemNum = number;
        itemName = name;
        itemPrice = price;
        itemUnit = unit;
    }
};

int main() 
{

    GroceryItem a[15] = 
	{
        {1, "Bananas", 35.83, "kg"},
        {2, "Apples", 72.68, "kg"},
        {3, "Bread", 224.17, "unit"},
        {4, "Milk", 258.54, "gallon"},
        {5, "Eggs", 214.05, "dozen"},
        {6, "Cheese", 373.50, "kg"},
        {7, "Yogurt", 298.02, "liter"},
        {8, "Carrots", 72.68, "kg"},
        {9, "Tomatoes", 107.04, "kg"},
        {10, "Broccoli", 143.64, "kg"},
        {11, "Rice", 143.64, "kg"},
        {12, "Pasta", 107.04, "kg"},
        {13, "Cereal", 298.02, "kg"},
        {14, "Oatmeal", 224.17, "kg"},
        {15, "Sugar", 89.67, "kg"},

    };

    for (int i = 0; i < 15; i++) 
	{
        cout << "Item " << i+1 << ": " << a[i].itemName << ", " << a[i].itemPrice << " rupees per " << a[i].itemUnit << endl;
    }

	int cart[100];
	int choice=1, i=0 ; 
	float price=0;
	cout<<endl;
	while(choice!=0)
	{
		cout<<"you want to buy,so press 0 : "; cin>>cart[i]; 
		choice=cart[i];
		i++; 
	}
	cout<<"\n";
	cout<<"\t-------------------------------------------\n";
	cout<<"\n\tyour order are deliverd in shopping cart : \n";
	cout<<"\t-------------------------------------------\n";
	 for (int i = 0; cart[i]!=NULL ; i++) {
	 	int j=cart[i];
        cout << "\tItem " << j << ": " << a[j-1].itemName << ", " << a[j-1].itemPrice << " rupees per " << a[j-1].itemUnit << endl;
        price=price+a[j-1].itemPrice;
    }	

	cout<<"\n\t------------------------------------------";
	cout<<"\n\tYour Bill is : "<<price<<" Rupees.";
	cout<<"\n\t------------------------------------------";
	cout<<"\n\tAfter 10 % discount : "<<price-price/10<<" Rupees.";
	cout<<"\n\t------------------------------------------";

}			