#include <iostream>
using namespace std;

class Distance {
	
private:
    int km;
    int meter;

public:
    
    void setKm() {
        cout<<"Enter Km : ";
        cin>>km;
    }

    void setMeter() {
        cout<<"Enter meter : ";
        cin>>meter;
    }

    Distance operator+(Distance input2) {
        Distance result;
        int totalMeter = (km * 1000 + meter) + (input2.km * 1000 + input2.meter);
        result.km = totalMeter / 1000;
        result.meter = totalMeter % 1000;
        return result;
    }

  
    void getData() {
       cout << "Km: " << km << ", Meter: " << meter <<endl;
    }
};

int main() {
  
    Distance input1;
    input1.setKm();
    input1.setMeter();

    Distance input2;
    input2.setKm();
    input2.setMeter();

    cout<<"-------------------\n";
    cout << "Input 1: " <<endl;
    input1.getData();
    cout<<"-------------------\n";

    cout<<"-------------------\n";
    cout << "Input 2: " <<endl;
    input2.getData();
    cout<<"-------------------\n";

    Distance total = input1 + input2;

    cout<<"\n-------------------\n";
    cout << "Output: " <<endl;
    total.getData();
    cout<<"-------------------\n";

}