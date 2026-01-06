#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
class number{
   
    public:
      int value;
    void show1(){
        cout<<"value:"<<value<<endl;
       
    }
    int describe(number obj){
       obj. value = 100;
        cout<<"inside function:"<<obj.value<<endl;
    }
};
int main(){
    number n;
    n.value = 56;
    n.describe(n);
    n.show1();
    

}