// Encapsulation --> Wrapping up of data and member functions in a single unit called class.
/*
 Access Modifier
 private - data and members accessible inside the class
 public - data and members accessible to everyone
 protected -  data and members accessible inside class and to its derived(child) class
*/ 
#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    double balance;
    string password; //data hiding
public:
    string accountId;
    string username;
};

int main(){

}