#include<iostream>
using namespace std;
class a{
    private:
    int balance;
    public:
    void deposit(int d){
        balance+=d;

    }
    void show(){
        cout<<"balance :"<<balance<<endl;
    }
};

int main(){ 
    a obj;
    obj.deposit(10);
    obj.show();
}