/*
Abstraction --> Hiding all UNNECESSARY details & Showing only the IMPORTANT parts
            --> Abstraction is implemented through Access modifiers/specifiers and Abstract classes
#Access Modifiers            
--public:- used for Showing important part
--private:- used for Hiding Unnecessary details (data hiding)
--protected:- used for making private but want to Inherit.


#Abstract Classes(It is like a Blueprint for other classes that are going to be implemented)
--Abstract classes are used to provide a base class from which other classes can be derived.
--They cannot be instantiated and are meant to be inherited (object can not be made).
--Abstract classes are typically used to define an interface for derived classes.
*/

#include<iostream>
#include<string>
using namespace std;

class Shape{ // abstract class
    virtual void draw() = 0;   // pure virtual function

};

class Circle : public Shape{
public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};

int main(){
    //Shape s1;    //object of abstract class type "Shape" is not allowed:
    Circle c1;
    c1.draw();
    
    return 0;
}