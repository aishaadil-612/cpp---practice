#include<iostream>
#include<string>
using namespace std;
class over{
public:    
    char name;
    void getinfo(int rollno)
    {
        cout<<"rollno"<<rollno<<endl;
     }
    void getinfo(char father)
    {
        cout<<"father:"<<father<<endl;
    }

    };
int main()
{
    over obj;
    obj.getinfo('a');
    return 0;
}    
