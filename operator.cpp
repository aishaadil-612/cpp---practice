// #include<iostream>
// #include<string>
// using namespace std;
// class calculation{
//     int real ,img;
// public:

// calculation(int r,int i){
//     r=real;
//     i=img;

// }

// calculation operator + (const calculation& c){  
//     calculation temp;
//     temp.real =real+ real.c;
//     temp.img = img+ img.c;
//     return temp;
// }
// void display(){
//     cout<<real<<"+"<<img<<endl;
// }
// };
// int main(){
// calculation obj(11 ,22);
// calculation obj1(5,10);
// calculation obj2(10,20);
// calculation obj4;
// obj4 = obj+obj1+obj2;

// }
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Operator overloading
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(5, 6);

    Complex c3 = c1 + c2; // Using overloaded operator

    c3.display();
    
    return 0;
}
