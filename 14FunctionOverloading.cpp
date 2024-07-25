#include<iostream>
#include<string>
using namespace std;

// Function Overloading: Defining multiple functions with the same name but different parameters.

class Print{
public:

// First Example
    void show(int x){
        cout<<x<<endl;
    }

    void show(string name, int x){
        cout<<name<<endl;
        cout<<x<<endl;
    }


// 2nd Example
    void display(int x){
        cout<<x<<endl;
    }

    void display(char x){
        cout<<x<<endl;
    }
};

int main (){
    Print p1;
// First Example
    p1.show(943);           // function with only one parameter(integer) will be called
    p1.show("yug", 20);     // function with two parameters(string and integer) will be called

// 2nd Example
    p1.display(343);
    p1.display('%');
    return 0;
}
