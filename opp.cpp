#include<iostream>
using namespace std;
class complex {
    int imag;
    int real;
    public:
    complex(){
        imag = 0;
        real =0;


    }
    complex(int r , int i){
        imag = i;
        real= r;
    }
    friend complex cal(complex pi ,complex c);

    void print(){
        cout<<real<<"+"<<imag<<"i";
    }
};
    complex cal( complex pi,complex c){
        complex temp;
         temp.real = pi.real +c.real;
         temp.imag = pi.imag +c.imag;
         return temp;
    }
int main(){ 
    complex c1(11,22);
    complex c2(11,23);
    complex c3;
    c3 = cal(c1,c2);
    c3.print();
    return 0;
}