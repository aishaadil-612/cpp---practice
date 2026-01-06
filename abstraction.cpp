#include<iostream>
using namespace std;
class animal{
    public:
    virtual void base()=0;
};
class dog:public animal{
    public:
    void base(){
        cout<<"this is derived";
    }
};
int main(){ 
    animal *ptr;
    dog obj;
    ptr = &obj;
    ptr -> base();
}