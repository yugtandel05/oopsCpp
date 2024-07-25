// Run time overloading
/*
Function Overriding -> Parent & Child both contain the same funcion with different implememtation.
                    -> The parent class function is said to be overridden.
NOTE --> Function Overriding dependent on INHERITANCE
*/
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"Parent class"<<endl;
    }
};

class Child{
public:
    void getInfo(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Child c1;
    c1.getInfo();      // Parent class function 'getInfo()' is overriden

    return 0;
}

//Analogy to remember --> over ride means Ek drawing ke exact uppar dusri drawing CHIPKAANA