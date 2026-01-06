#include<iostream>
using namespace std;
class baseclass{
    public :
   int  publicvar = 100;
   protected:
   int protectedvar= 200;
   private:
   int privatevar =300;
};
class publicder : public baseclass{
    public:
    void display(){
        cout<<"public:"<<publicvar<<endl;
        cout<<"protected"<<protectedvar<<endl;

    }
};
class protectedder : protected baseclass{
    public:
    void display(){
        cout<<"public2:"<<publicvar<<endl;
        cout<<"protected2:"<<protectedvar<<endl;
        
    }
};
class privateder : private baseclass{
    public:
    void display(){
        cout<<"public3:"<<publicvar<<endl;
        cout<<"protected3:"<<protectedvar<<endl;
        
    }
};
int main(){
    publicder obj1;
    obj1.display();
    protectedder obj2;
    obj2.display();
    privateder obj3;
    obj3.display();
}