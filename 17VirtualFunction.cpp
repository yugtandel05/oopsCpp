//Runtime polymorphism
/*
A virtual function in C++ is a function that you expect to be overridden in derived classes. When you call a virtual function through a base class pointer or reference, the call is resolved at runtime to the correct overridden function in the derived class. This behavior is known as runtime polymorphism.

Virtual Functions --> A virtual function is a member function that you expect to be redefined in derived classes.
Virtual funcion property:-  
-- Virtual functions are Dynamic in nature.
-- Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
-- A virtual function is called during Runtime
*/
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    virtual void hello(){
        cout<<"hellow from parent"<<endl;
    }
};

class Son : public Parent{
public:
    void hello() override {
        cout<<"Hello from Son"<<endl;
    }
};

class Daughter : public Parent{
    void hello() override {
        cout<<"Hello from Daughter"<<endl;
    }
};

int main(){
    Parent* p1;
    Son s1;
    Daughter d1;

    p1 = &s1;
    (*p1).hello();     // (*p1).hello is same as p1->hello

    p1 = &d1;
    p1->hello();
          

    return 0;
}

