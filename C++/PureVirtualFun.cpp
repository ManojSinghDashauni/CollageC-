//pure virtual function

#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display()=0;
};

class derived:public Base{
    public:
    void display(){
        cout<<"display of derived"<<endl;
    }
};

int main(){
    Base *bptr;
    derived D;
    bptr=&D;
    bptr->display();
    return 0;
}

/*
output

display of derived
*/