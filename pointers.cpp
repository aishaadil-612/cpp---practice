#include<iostream>
using namespace std;
int main(){
   int a = 3;
   int* b =&a;
   cout<<"the adress of a:"<<&a<<endl;
   cout<<"the adress of a:"<<b<<endl;
   cout<<"the value address at a:"<<*b<<endl;
    int ** c = &b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value address of b is"<<*c<<endl;
    cout<< "the value at adreess of value at {calue at(c)}"<<**c;
   return 0; 
}
