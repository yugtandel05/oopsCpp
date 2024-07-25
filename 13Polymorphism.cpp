#include<iostream>
#include<string>
using namespace std;
/*
Polymorphism -> Polymorphism is the ability of objects to take on Different FORMS or BEHAVE in different ways depending on the CONTEXT in which they are used.
poly --> many
morph --> forms
There are 2 types of Polymorphism:
1. Compile Time Polymorphism(Static Polymorphism)
 --Constructor Overloading
 --Function Overloading
 --Operating Overloading
 --Template Overloading

2. Run Time Polymorphism(Dynamic Polymorphism)
--Function Overriding
--Virtual Functions
--Pure Virtual Functions
--Abstract Classes
*/

//Let's take an example of Compile Time Polymorphism [Constructor Overloading]
// Constructor Overloading -> Defining multiple constructors in a class with different parameters.

class Student{
public:
    string name;
    int age;

    Student(){
        cout<<"Non Parameterized Constructor is called"<<endl;
    }

    Student(string name, int age){
        cout<<"Parameterized Constructor is Called"<<endl;
        this->name = name;
        this->age = age;
        
    }
};

int main (){
    Student s1;   // Non parameterized constructor will be called this Object
    Student s2("Yug", 22);  // Parameterized constructor will be called for this Object
    
    return 0;
}