//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT – both the constructor (default and parameterized) in both class.

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
    B(int x, int y):A(y){
        cout<<"para cons of B : "<<x<<endl;
    }
};

int main(){
    B b2(20,30);
    getch();
    return 0;
}
/*
OUTPUT
para cons of A : 30
para cons of B : 20
*/

