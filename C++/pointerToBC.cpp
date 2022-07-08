//pointer to base class.

#include <iostream>
using namespace std;

class Base{
    public:
    int a;
    void show(){
        cout<<"base class "<<a<<endl;
    }
};

class derived:public Base{
    public:
    int b;
    void show(){
        cout<<"derived class "<<b<<endl;
    }
};

int main(){
    Base B, *bptr;
    bptr=&B;
    bptr->a=30;
    bptr->show();
    bptr->a=300;
    bptr->show();
    bptr->a=9000;
    bptr->show();

    
    return 0;
}

/*
output

base class 30
base class 300
base class 9000
*/