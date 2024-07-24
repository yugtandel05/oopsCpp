/*
Simple Explanation:-

****Child class OBJECTS can ACCESS which members of Parent class?
public mode -> public members only
private mode -> none
protected mode ->none

*** WITHIN Child class, which members of Parent class is ACCESSIBLE?
public mode -> public & protected members
private mode -> public & protected members
protected mode -> public & protected members

NOTE--> It means WITHIN the Child class public & protected members are ACCESSIBLE and Private members are NON-ACCESSIBLE
*/





/*
Detailed Explanation:-

1. If it is PUBLIC Mode Of Inheritance then,
- In Base(parent) class public members [
accessible: within it's own class & derived(child class) and to outside the class by it's own class object and it's child class object
In-Accessible: none
]

- In Base(parent) class private members [
accessible: within it's own class only
In-accessible: Every Where
]

- In Base(parent) class protected members [
accessible: within it's own class & derived class and to outside the  class by it's own class object and In-accessible: to it's child class object
]
--------------------------------------------------------------------------------------------------------------------


2. If it is PRIVATE Mode Of Inheritance then,
- In Base(parent) class public members [
Accessible: within it's own & it's derived class and by it's own class object.
In-Accessible : to it's derived class object.
]

- In Base(parent) class private members [
Accessible: within it's own class only.
In-Accessible : to it's derived class, to it's own class object and to it's derived class object.
]

- In Base(parent) class protected members [
Accessible: within it's own & it's derived class.
In-Accessible : to it's own & it's derived class object.
]
--------------------------------------------------------------------------------------------------------------------


3. If it is PROTECTED Mode Of Inheritance then,
- In Base(parent) class public members [
Accessible: within it's own & derived class and to it's own class object.
In-Accessible: to it's derived class object.
]

- In Base(parent) class private members [
Accessible: within it's own class only.
In-Accessible: within it's derived class,to it's own class object and to it's derived class object.
]

- In Base(parent) class protected members [
Accessible: within it's own & derived class .
In-Accessible: to it's own & to it's derived class object.
]

*/ 

