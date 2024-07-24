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

    string getInfo(){
        girlFriendName = "Priyanka";
        bankAccountName = "Savings";
        return girlFriendName;
    }
protected:
    string girlFriendName;

private:
    string bankAccountName;
};

class Student : public Person {
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){   // here Person class consturctor is called explicitly
        this->rollno = rollno;

    }

// NOTE--> Within the child class, we can access public & protected members of Parent class and cannot access private members
    void getInfo(){
        cout<< "name : "<<name<<endl;       // public members
        cout<< "age : "<<age<<endl;
        cout<< "rollno : "<<rollno<<endl;
        cout<< "gf : "<<girlFriendName<<endl;      // protected member
        // cout<<"bank account name : "<<bankAccountName<<endl;      // private member
    
        
    }
};

int main(){
    Student s1("rahul", 21, 52);
    Person p1("lalit",32);
    cout<<p1.getInfo()<<endl;
    // cout<<s1.name<<endl;
    // cout<<p1.name<<endl;
    s1.getInfo();
    return 0;
}
