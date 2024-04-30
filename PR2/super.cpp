#include<iostream>
using namespace std;
class Item:
   // definit__(self, item_number, item_name, quantity, price, discount):
        self.item_number = item_number;
        self.item_name = item_name;
        self.quantity = quantity;
        self.price = price;
        self.discount = discount;

class SupermarketBillingSystem:
    def __init__(self):
        self.items = []
        self.logged_in = False

    def login(self):
        //Dummy user id and password for demonstration
        user_id = input("Enter User ID: ")
        password = input("Enter Password: ")

        if user_id == "admin" and password == "password":
            self.logged_in = True
            print("Login successful!")
        else:
            print("Invalid User ID or Password")

    def add_item(self):
        if not self.logged_in:
            print("Please login first!")
            return

        item_number = input("Enter Item Number: ")
        item_name = input("Enter Item Name: ")
        quantity = int(input("Enter Quantity: "))
        price = float(input("Enter Price: "))
        discount = float(input("Enter Discount (%): "))
        item = Item(item_number, item_name, quantity, price, discount)
        self.items.append(item)
        print("Item added successfully!")

    def display_all_records(self):
        if not self.logged_in:
            print("Please login first!")
            return

        for item in self.items:
            print(f"Item Number: {item.item_number}, Item Name: {item.item_name}, Quantity: {item.quantity}, Price: {item.price}, Discount: {item.discount}%")

    def search_by_item_number(self, item_number):
        if not self.logged_in:
            print("Please login first!")
            return

        found = False
        for item in self.items:
            if item.item_number == item_number:
                found = True
                print(f"Item Number: {item.item_number}, Item Name: {item.item_name}, Quantity: {item.quantity}, Price: {item.price}, Discount: {item.discount}%")
                break
        if not found:
            print("Item not found!")

 //Main function
def main():
    supermarket = SupermarketBillingSystem()

    while True:
        print("\n1. Login")
        print("2. Add Item")
        print("3. Display All Records")
        print("4. Search by Item Number")
        print("5. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            supermarket.login()
        elif choice == '2':
            supermarket.add_item()
        elif choice == '3':
            supermarket.display_all_records()
        elif choice == '4':
            item_number = input("Enter Item Number to search: ")
            supermarket.search_by_item_number(item_number)
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice!")

if __name__ == "__main__":
    main()