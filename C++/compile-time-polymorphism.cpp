//compile-time polymorphism

#include <iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"base class "<<endl;
    }
};

class derived:public Base{
    public:
    void show(){
        cout<<"derived class "<<endl;
    }
};

int main(){
    derived D;
    D.show();//calls derived class show()
    D.Base::show();//calls base class show()
    return 0;
}

/*
output

derived class 
base class 
base class 9000
*/