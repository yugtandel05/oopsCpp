#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string breed;

    Animal(string breed){
        cout<<"Animal Constructor called"<<endl;
        this->breed = breed;
    }

    void eat(){
        cout<<"Animal Eating"<<endl;
    }
};

class Dog : public Animal{
public:    
    string name;

    Dog(string breed, string name) : Animal(breed){
        cout<<"Dog Constructor called"<<endl;
        this->name = name;
    }
    void bark(){
        cout<<"is barking"<<endl;
    }
};

class Cat : public Animal{
public:
    string name;
    
    Cat(string breed, string name) : Animal(breed){
        cout<<"Cat constructor is called"<<endl;
        this->name = name;
    }
    void meow(){
        cout<<"is meowing"<<endl;
    }
};



int main(){
    Dog d1("dogBreed", "Bruno");
    cout<<d1.name<<endl;
    cout<<d1.breed<<endl;
    d1.bark();
    d1.eat();


    Cat c1("catBreed", "Michen");
    cout<<c1.name<<endl;
    cout<<c1.breed<<endl;
    c1.eat();
    c1.meow();
    return 0;
}