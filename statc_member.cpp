#include<iostream>
using namespace std;
class myclass{
    public:
    int roll;
    static int count;

    void show(){
        cout<<"roll:"<<roll<<"||count:"<<count++<<endl;   
     }
    static int function(){
        cout<<"the prettiest is: aisha"<<endl;
    }
  

};
int myclass::count =0;



int main(){
    myclass c1,c2,c3,c4,c5;
    c1.roll=2;
    c2.roll=3;
    c3.roll=5;
    c4.roll=6;
    c5.roll=7;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c5.show();
    myclass::function();
    return 0;
    
    
}