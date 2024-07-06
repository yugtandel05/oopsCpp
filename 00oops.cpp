#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
    //properties or Attributes
public:

    // Non-parameterized
    Teacher(){
        cout<<"Hi, I am constructor\n";
        dept = "Computer Science";
    }

    //parameterized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    //methods or member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};

int main(){
    Teacher t1("Shraddha", "ComputerScience", "C++",25000);  //constructor call
    t1.getInfo();
    return 0;
}