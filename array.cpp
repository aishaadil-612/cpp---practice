#include<iostream>
#include<string>
using namespace std;
class over{
    int salary ,id;
    char name[100];
public:
  void input()
  {
    cout<<"enter the employee:"<<endl;
    salary=200;
  }
  void show(){
    cout<<"employee id is:"<<id<<endl;
    cout<<"employee salary is:"<<salary<<endl;
    cout <<"name:"<<name<<endl;

  }
};
int main(){
  over obj;
  obj.input();
  obj.show();
  return 0;
    
}
