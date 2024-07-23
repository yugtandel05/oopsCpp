//Inheritance--> When properties & member functions of base class are passed on to the derived class.
// --> When inheritance happens, 1st of all Parent Class constructor is called and then child class constructor.
// --> On the other hand, 1st of all destructor of Child class is called and then Parent class destructor.

#include<iostream>
#include<string>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }
    Person(){
        cout<<"Parent constructor...\n";
    }
    ~Person(){
        cout<<"Parent destructor..\n";
    }
};

class Student : public Person {
public:
    int rollno;

    Student(){
        cout<<"Child constructor ..\n";
    }

     ~Student(){
        cout<<"Child destructor..\n";
    }

    void getInfo(){
        cout<< "name : "<<name<<endl;
        cout<< "age : "<<age<<endl;
        cout<< "rollno : "<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "rahul";
    s1.age = 21;
    s1.rollno = 52;
    s1.getInfo();
    return 0;
}
