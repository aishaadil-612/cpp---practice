#include<iostream>
#include<string>
using namespace std;
// class animal{
// public:
// string name;
//   void name(){  // without virtual there will be no override when pointer is made
//     cout<<"the first name is aisha"<<endl;

// }
// };
// class dog:
// protected animal{
//     public:
//     void je(string n){
//         name = n;
//         cout<<"name:"<<n;
        


//     }

// };
// int main(){
//     dog obj;
//     obj.je("aisha"); ///in public you can write obj.name=aisha but in private nd protected you cant write
// }
//private 
class person{
    public:
    string name;
};
class student:private person{
    public:
    void name(string n){
        name = n;  ///instead of this
        cout<<"name:"<<endl;

    }
};
int main()
{  student obj;
    obj.name("aisha");}
