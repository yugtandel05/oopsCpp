#include<iostream>
using namespace std;

void Increase(){
    static int x = 0;
    cout<<"x = "<<x<<endl;
    x++;
}

int main (){
    Increase();
    Increase();
    Increase();
    Increase();

    
    return 0;
}