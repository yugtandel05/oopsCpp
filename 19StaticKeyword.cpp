/*
Static Keyword
# Static variable --> Variables declared as static in a function are created & initialised once for the lifetime of the program.//in Function

Static variables in a class are created & initialised once. They are shared by all the objects of the class.//In class.
*/

#include<iostream>
#include<string>
using namespace std;

class A{
public:
    A(){
        cout<<"constructor"<<endl;
    }

    ~A(){
        cout<<"destructor"<<endl;
    }
};

int main (){
    if (true){
        static A obj;
    }
    
    cout<<"end of the main function"<<endl;
    return 0;
}

/*
output without Static keyword:-
//constructor
//destructor
//end of the main function
[here, object destroyed before program finished befor main function ends]


Output with Static keyword:-
//constructor
//end of the main function
//destructor
[here, object destroyed after program finished after main function ends]

*/