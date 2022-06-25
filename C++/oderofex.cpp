//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT – oreder of execution.

//OBJECTIVE -to understand the implementation of oreder of execution

//EXPLANATION -In this program we implement oreder of execution.

//SOURCE CODE


#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"default cons of A"<<endl;
    }
    ~A(){
        cout<<"destructor of A"<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"default cons of B"<<endl;
    }
    ~B(){
        cout<<"destructor of B"<<endl;
    }
};

class C:public B{
    public:
    C(){
        cout<<"default cons of C"<<endl;
    }
    ~C(){
        cout<<"destructor of C"<<endl;
    }
};

int main(){
    C c1;
    getch();
    return 0;
}
/*
OUTPUT
default cons of A
default cons of B
default cons of C
destructor of C
destructor of B
destructor of A
*/

