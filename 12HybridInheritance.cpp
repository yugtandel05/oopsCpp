#include<iostream>
#include<string>
using namespace std;

class Device{
public:
    Device(){
        cout<<"Device Constructor is called"<<endl;
    }

    void turnOn(){
        cout<<"Device is turning on"<<endl;
    }
};

class Phone : public Device{
public:     
    Phone(){
        cout<<"Phone Constructor is called"<<endl;
    }

    void makeCall(){
        cout<<"is calling"<<endl;
    }
};

class Camera : public Device{
public:
    Camera(){
        cout<<"Camera constructor is called"<<endl;
    }

    void takePhoto(){
        cout<<"taking photo"<<endl;
    }
};

class SmartPhone : public Phone, public Camera{
public:
    SmartPhone(){
        cout<<"Cout Smart Phone constructor is called"<<endl;
    }

};




int main(){
    Phone p1;
    p1.turnOn();
    p1.makeCall();

    Camera c1;
    c1.takePhoto();
    c1.turnOn();

    SmartPhone s1;
    s1.makeCall();
    s1.takePhoto();

    return 0;
}