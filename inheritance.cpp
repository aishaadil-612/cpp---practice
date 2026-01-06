#include<iostream>
#include<string>
using namespace std;
class animal{
public:
  void sound(){
   cout<<"dog make sounds"<< endl; 
  } 
};
class dog :
public animal{
public:
  void sound(){
  cout<<"barks"<< endl;
  }
};
int main(){
animal obj;
obj.sound();
obj.sound();
return 0;
  
}
// oveerride



