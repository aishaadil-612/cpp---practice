#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the numbers"<<endl;
    cin>>num1>>num2;
    try{
        if(num2==0){
          throw runtime_error("invalid statement");

          cout<<"result: "<<num1/num2<<endl;
        }
    }
    catch(exception &e)
    {
        cout<<"error"<<e.what()<<endl;
    }

}