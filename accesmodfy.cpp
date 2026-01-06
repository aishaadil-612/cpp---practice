#include<iostream>
using namespace std;
class employyee{
    private:
      int a,b,c;
    public:
       int d ,e ;
       void setdata(int a1, int b1, int c1);
       void getdata(){
        cout<<"the value a :"<<a<<endl;
        cout<<"the value b :"<<b<<endl;
        cout<<"the value c :"<<c<<endl;
        cout<<"the value d :"<<d<<endl;
        cout<<"the value e :"<<e<<endl; 
       }
  };
void employyee :: setdataI(int a1, int b1, int c1){
    a =a1;
    b = b1;
    c = c1;
}


int main(){
 employyee harry;
 harry.d = 34;
 harry.e= 44;
 harry.setdata(1,2,3);
 harry.getdata():
}