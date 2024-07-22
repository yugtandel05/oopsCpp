// A destructor in C++ is a special member function of a class that is executed automatically when an object of that class is destroyed. Destructors are used to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.
// A class has only one destructor. Therefore, a destructor can not be overloaded
// A destructor has the same name as the class but is preceded by a tilde (~). For example, the destructor for a class named ToyBox would be ~ToyBox().


#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr;   //'delete' key word is used to delete Dynamically Allocated memory that the pointer holds.
    }

    void getInfo(){
        cout<< "name : "<<name<<endl;
        cout<< "cgpa : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("rahul kumer", 8.9);
    s1.getInfo();
    return 0;
}
