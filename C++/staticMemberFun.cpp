//static member function

#include <iostream>
using namespace std;

class demo{
    static int count;
    int id;
    public:
    void setid(){
        id= ++count;
    }
    void display(){
        cout<<"object no : "<<id<<endl;
    }
    static void showount(){
        cout<<"count is : "<<count<<endl;
    }
};

int demo::count;
int main(){
    demo d1,d2;
    d1.setid();
    d2.setid();
    
    demo::showount();
    
    demo d3;
    d3.setid();
    demo::showount();
    
    d1.display();
    d2.display();
    d3.display();
    return 0;
}