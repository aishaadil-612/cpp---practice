#include<iostream>
#include<string>
using namespace std;
int main(){
int a=10;
int ref = a;
cout<<"before mody a:"<<ref<<endl;
ref = 20;
cout<<"after mody a:"<<a<<endl;
cout<<"ref:"<<ref<<endl;
return 0;
}