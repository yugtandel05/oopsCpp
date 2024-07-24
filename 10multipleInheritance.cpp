#include<iostream>
#include<string>
using namespace std;

class Phone{
public:
    string model;
    int price;

    Phone(string phoneModel, int phonePrice){
        cout<<"Phone Constructor is called"<<endl;
        this->model = phoneModel;
        this->price = phonePrice;
    }

    void makeCalls(){
        cout<<"Phone is calling"<<endl;
    }
};

class Camera{
public:
    int resolution;

    Camera(int cameraRes){
        cout<<"Camera Constructor is called"<<endl;
        this->resolution = cameraRes;
    }

    void capturePhoto(){
        cout<<"Camera is capturing photo"<<endl;
    }
};

class SmartDevice : private Phone, protected Camera{
public:
    string deviceName;
    
    SmartDevice(string sdModel, int sdPrice, int sdRes, string sdDevName) : Phone(sdModel, sdPrice), Camera(sdRes){
        cout<<"SmartDevice Constructor is called"<<endl;
        this->deviceName = sdDevName;
    }

    void useSmartDevice(){
        cout<<"Using smart device"<<endl;
        makeCalls();        //Inherit from phone
        capturePhoto();     //inherit from Camera
    }
};


int main(){
    SmartDevice sd("Galaxy s21", 100000, 108, "Samsung Smart Phone");
    sd.useSmartDevice();
    cout<<sd.deviceName<<endl;
    //sd.price;           // In-accessible because mode is private
    //sd.resolution;      // In-accessible because mode is protected
    return 0;
}