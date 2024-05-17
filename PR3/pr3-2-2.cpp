/*  Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.*/

}*/#include<iostream>
using namespace std;

class number {
public:
    int num;

    void rate1() {
        cout << "Enter any number to find square and cube : ";
        cin >> num;
    }
};

class square : public number {
public:
    int sqr;

    void rate2() {
        sqr = num * num;
        cout << "THE SQUARE OF YOUR NUMBER :" << sqr << endl;
    }
};

class cube : public number {
public:
    int cubes;

    void rate3() {
        cubes = num * num * num;
        cout << "THE CUBES OF YOUR NUMBER :" << cubes << endl;
    }
};

int main() {
    number n1;
    square n2;
    cube n3;
    
    n1.rate1();
    n2.rate1(); 
    n3.rate1();
    
    n2.rate2(); 
    n3.rate3(); 
    
    return 0;
}

	

