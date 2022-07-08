//virtual function

#include <iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"display of base"<<endl;
    }
    virtual void show(){
        cout<<"base class"<<endl;
    }
};

class derived:public Base{
    public:
    void display(){
        cout<<"display of derived"<<endl;
    }
    void show(){
        cout<<"derived class"<<endl;
    }
};

int main(){
    Base B, *bptr;
    derived D;
    
    cout<<"bptr points to base"<<endl;
    bptr=&B;
    bptr->display();
    bptr->show();
    
    cout<<"bptr points to derived"<<endl;
    bptr=&D;
    bptr->display();//calls base version
    bptr->show();//calls derived version
    return 0;
}

/*
output

bptr points to base
display of base
base class

bptr points to derived
display of base
derived class
*/