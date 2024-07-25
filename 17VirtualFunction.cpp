//Runtime polymorphism
/*
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

class Child{
public:
    void hello(){
        cout<<"Hello from child"<<endl;
    }
};

int main(){
    Child c1;
    c1.hello();      

    return 0;
}

//There is more about Virtual funcion. I will study later
