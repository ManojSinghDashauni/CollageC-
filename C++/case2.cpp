//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT – default constructor in both the class.

//OBJECTIVE -to understand the passing default constructor in both the class.

//EXPLANATION -In this program we implement passing default constructor in both the class.

//SOURCE CODE


#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"default cons of A"<<endl;
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
    getch();
    return 0;
}
/*
OUTPUT
default cons of A
default cons of A
default cons of B
*/

