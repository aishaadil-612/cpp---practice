#include<iostream>
#include<string>
using namespace std;
class marks{
public:
marks(int maths,int compu){
    cout<<("maths:")<<maths<<endl;
    cout<<("compu:")<<compu<<endl;
}
void show(){
    cout<<("congrats aisha")<<endl;

}
};
int main(){
marks obj(78,88);
obj.show();
}
