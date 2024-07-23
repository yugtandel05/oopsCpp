//Inheritance--> When properties & member functions of base class are passed on to the derived class.
// --> When inheritance happens, 1st of all Parent Class constructor is called and then child class constructor.
// --> On the other hand, 1st of all destructor of Child class is called and then Parent class destructor.

#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
   
};

class Student : public Person {
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){   // here Person class consturctor is called explicitly
        this->rollno = rollno;
    }


    void getInfo(){
        cout<< "name : "<<name<<endl;
        cout<< "age : "<<age<<endl;
        cout<< "rollno : "<<rollno<<endl;
    }
};

int main(){
    Student s1("rahul", 21, 52);
    
    s1.getInfo();
    return 0;
}
