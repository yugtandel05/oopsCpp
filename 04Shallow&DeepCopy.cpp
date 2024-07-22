// Shallow Copy -> A shallow copy of an object copies all of the member values from one object to another.

// Deep Copy -> A deep copy, on the hand not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.

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

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo(){
        cout<< "name : "<<name<<endl;
        cout<< "cgpa : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("rahul kumer", 8.9);
    Student s2(s1);

    s1.getInfo();

    *(s2.cgpaPtr) = 9.2;
    s2.name = "Milind";
    
    s1.getInfo();
    

    return 0;
}
