#include <iostream>
using namespace std;

class ToyBox {
public:
    int toys;

    // Regular constructor
    ToyBox(int numToys) {
        toys = numToys;
        cout << "Regular constructor called" << endl;
    }

    // Copy constructor
    ToyBox(const ToyBox &box) {
        toys = box.toys;
        cout << "Copy constructor called" << endl;
    }

    // Display the number of toys
    void showToys() const {
        cout << "This toy box has " << toys << " toys." << endl;
    }
};

// Function that takes a ToyBox by value (invokes copy constructor)
void showToysByValue(ToyBox box) {
    cout << "Inside showToysByValue function: ";
    box.showToys();
}

// Function that returns a ToyBox by value (invokes copy constructor)
ToyBox createBox() {
    ToyBox tempBox(20);  // Regular constructor is called
    return tempBox;      // Copy constructor is called when returning by value
}

int main() {
    // Condition 1: Initializing an object from another object
    ToyBox originalBox(10);        // Regular constructor is called
    ToyBox copiedBox1 = originalBox; // Copy constructor is called

    // Condition 2: Passing an object by value to a function
    showToysByValue(originalBox);  // Copy constructor is called when passing by value

    // Condition 3: Returning an object by value from a function
    ToyBox copiedBox2 = createBox(); // Copy constructor is called when returning by value

    // Condition 4: Copying within a temporary object (compiler-generated)
    ToyBox copiedBox3(ToyBox(30)); // Regular constructor for temporary, copy constructor for copiedBox3

    // Display final results
    cout << "Final state of toy boxes:" << endl;
    originalBox.showToys();
    copiedBox1.showToys();
    copiedBox2.showToys();
    copiedBox3.showToys();

    return 0;
}
