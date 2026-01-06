#include<iostream>
#include<string>
using namespace std;
// class number{
//     int age;
// public:

//    number(int num){
//     cout<<"a:"<<num<<endl;
//      age = num;
//    }
//    number(const number &obj ){
//     cout<<"copy constructor"<<endl
//      age = obj.age;
//    }
//   void sound(){
//    cout<<"dog make sounds"<< endl; 
//   } 
// };
// int main(){
// number z(20);
// number z1(pi);
// z1.sound();
// return 0;
// }
class Person {
    int age;

public:
    Person(int a) {   // Parameterized constructor
        age = a;
    }

    Person(const Person &p) {   // Copy constructor
        age = p.age;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1(20);    // Normal object
    Person p2(p1);    // Copy constructor called

    p2.display();
    return 0;
}


