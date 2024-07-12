#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
    //properties or Attributes
public:
    string name;
    string dept;
    string subject;

    // Non-parameterized
    Teacher(){
        cout<<"Hi, I am constructor\n";
        dept = "Computer Science";
    }

    //parameterized
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    

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