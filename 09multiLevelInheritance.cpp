#include<iostream>
#include<string>
using namespace std;

class Vehicle{
public:
    string brand;
    int year;

    Vehicle(string vehicleBrand, int vehicleYear){
        cout<<"Vehicle Constructor is called"<<endl;
        this->brand = vehicleBrand;
        this->year = vehicleYear;
    }

    void start(){
        cout<<"Vehicle is starting "<<endl;
    }
};

class Car : public Vehicle{
public:
    string color;

    Car(string carBrand, int carYear, string carColor) : Vehicle(carBrand, carYear){
        cout<<"Car Constructor is called"<<endl;
        this->color = carColor;
    }

    void honk(){
        cout<<"Car is playing Horn "<<endl;
    }
};

class ElectricCar : public Car{
public:
    int batteryLife;

    ElectricCar(string ecBrand, int ecYear, string ecColor, int ecBatteryLife) : Car(ecBrand, ecYear, ecColor){
        cout<<"Electric Car constructor is Called"<<endl;
        this->batteryLife = ecBatteryLife;
    }

    void charge(){
        cout<<"Car is charging"<<endl;
    }

};


int main(){
    ElectricCar ec1("Tesla",2024, "Grey", 32);
    ec1.start();
    ec1.honk();
    ec1.charge();
    cout<<ec1.batteryLife<<" hours"<<endl;
    cout<<ec1.color<<" color"<<endl;
    cout<<ec1.brand<<" brand"<<endl;
    
return 0; 
}