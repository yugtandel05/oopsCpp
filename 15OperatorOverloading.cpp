// Binary Operator Overloading 
#include<iostream>
using namespace std;

class Complex{
public:
    int real, imag;

    Complex(int real=0, int imag=0){
        this->real = real;
        this->imag = imag;
    }

    Complex add(Complex obj){
        Complex temp;
        temp.real = real + obj.real; // real -> c2.real        obj.real -> c1.real
        temp.imag = imag + obj.imag;  // imag -> c2.imag       obj.imag -> c1.imag
        // temp.real = 30
        // temp.imag = 35
        // temp(30, 35)
        return temp;
    }
    // Operator overloading
    Complex operator +(Complex obj){
        Complex res;
        res.real = real + obj.real;    // real -> c2.real        obj.real -> c1.real
        res.imag = imag + obj.imag;     // imag -> c2.imag       obj.imag -> c1.imag
        return res;
    }

    void printSum(){
        cout<<"Real = "<<real<<endl;
        cout<<"Imag = "<<imag<<endl;
        cout<<"sum of real an Imaginary part = "<<real + imag<<endl;
    }

    Complex operator -(Complex object){
        Complex res2;
        res2.real = real - object.real;
        res2.imag = imag - object.imag;
        return res2;

    }
};

int main(){
    Complex c1(10, 5);
    Complex c2(20, 30);      // temp --> c2 + c1 ==> temp(30, 35)
    // Complex c3;
    // c3 = c2.add(c1);  // c2 + c1
    // cout<<c3.real<<endl;
    // cout<<c3.imag<<endl;




    Complex c5(1, 1);
    Complex c4;
    c4 = c2 + c1 - c5;    // c4 = c2 + c1 - c5; ----> c4 = res - c5;   //res(30,35)   //   c4  = res2(29, 34)
    c4.printSum();

//c4 -> c4(29, 34)
    
}
//NOTE I have recorded video on operator overloading You can watch it in the folder OBS recording in my pc in Video Folder