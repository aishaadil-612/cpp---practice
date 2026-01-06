#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    int a = 25;
    

};
class b:virtual public A{};
class c : virtual public A{};
class d : public b,public c{
    

};