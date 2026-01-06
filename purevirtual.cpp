#include<iostream>
#include<string>
using namespace std;
class animal{   //abstract class
public:
virtual void sound() = 0; //pure virtual
};
class dog:
public animal{
public:
   void sound(){
    cout<<"derived class"<<endl;

   }    

};
int main(){
    animal * ptr;
    dog obj;
    ptr = &obj;
    ptr -> sound();
}