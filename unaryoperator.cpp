#include <iostream>
using namespace std;

class A {
    int kg;

public:
    A(){
        kg=0
    }
    A(int r ) {
        r=kg;
    }

    // Operator overloading
    A operator ++ () {
        kg++;
        return *this;
    }

    void display() {
        cout << " the weight is: " << kg<< endl;
    }
};

int main() {
    A c1(5);
 // Using overloaded operator

    c1.display();
    
    return 0;
}