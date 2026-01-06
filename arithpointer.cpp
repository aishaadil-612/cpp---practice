#include<iostream>
#include<string>
using namespace std;
int main(){
    int marks[4] = {3,4,5,200};
    int *p = marks;
    cout<<*p+1<<endl;
    ++p;
    cout <<*p<<endl;
    ++p;
    cout<<*p<<endl;

}