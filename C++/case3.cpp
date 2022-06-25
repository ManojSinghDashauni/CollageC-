//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT – a default and a parameterized in a base class.

//OBJECTIVE -to understand the passing the argument it required to the base class constructor.

//EXPLANATION -In this program we implement passing the argument it required to the base class constructor..

//SOURCE CODE


#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"default cons of A"<<endl;
    }
    A(int y){
        cout<<"para cons of A : "<<y<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"default cons of B"<<endl;
    }
};

int main(){
    A a;
    B b1;
    A a2(20);
    getch();
    return 0;
}
/*
OUTPUT
default cons of A
default cons of A
default cons of B
para cons of A : 20
*/

