#include<iostream>
#include<string>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        img =0;
        real=0;
    }
    complex(int i ,int r){
        real = r;
        img= i;
    }
    friend complex subcomplex(complex c1,complex c2);
    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
complex subcomplex(complex c1,complex c2){
    complex temp;
    temp.real = c1.real+c2.real;
    temp.img = c1.img+c2.img;
    return temp;
}
int main(){
    complex b1(11,22);
    complex b2(12,33);
    complex b3;
    b3=b1+b2;
    return 0;


}