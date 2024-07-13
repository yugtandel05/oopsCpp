// Constructor --> Special method invoked automatically at time of object creation. Used for Initialisation.
/*
- Same name as class
- Constructor doesn't have a return type
- Only called once (automatically), at object creation
- Memory allocation happens when constructor is called
*/

//NOTE--> Always declare a constructor Public
//NOTE --> We can create multiple constructor in a single class but they should not have same parameters. This phenomena called CONSTRUCTOR OVERLOADING. This is an example of polymorphism

/*
Types of Consturctors
1. Non-parameterized constructor 
2. Parameterized constructor
3. Copy constructor

*/
// this Pointer -> this is a special pointer in C++ that points to the current object.
// this-> prop is same as *(this).prop
/*
for eg
int x = 10
int* p = x  // here, pointer p is storing address of x (let say 'hx1234')
cout<<p<<;  // --> hx1233
cout<<*p<<; // It will give you 'value at address' of x i.e --> 10

So, 'this' is a pointer and *(this).prop is 'value at address' of object
And 'this->prop' is shortcut way of writing *(this).prop
*/

//Copy Constructor --> Special Constructor(default) used to copy properties of one object into another.
/*
Q.Does a Copy Constructor is invoked when a normal object is created ?
--> No, the copy constructor is not invoked when a normal object is created. A normal object is created using a regular constructor. The copy constructor is only invoked when an object is being created as a copy of another object.

Q.When is a Copy Constructor Invoked?
The copy constructor is invoked in specific situations, such as:
-When an object is initialized from another object of the same class.
-When an object is passed by value to a function.
-When an object is returned by value from a function.
-When the compiler generates a temporary object.
*/



