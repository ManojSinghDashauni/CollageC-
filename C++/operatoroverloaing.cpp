//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to create a class demo having 3 data member of the integer type and 3 member function for reading data. display data and to implement urnary(-) oprator. 

//OBJECTIVE -to understand the implementation of urnary oprator overloading.

//EXPLANATION -In this program we create a class demo and store data and use oprator overloading.

//SOURCE CODE

#include <iostream>
#include <conio.h>
using namespace std;

class demo{
    int x,y,z;
    public:
    void getdata(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<"value of x is : "<<x<<endl;
        cout<<"value of y is : "<<y<<endl;
        cout<<"value of z is : "<<z<<endl;
    }
    void operator -(){
        x=-x;
        y=-y;
        z=-z;
    }
};

int main(){
    demo d;
    d.getdata(3,4,5);
    d.display();
    -d;
    cout<<"after oprator overloading"<<endl;
    d.display();
    getch();
    return 0;
}

/*
OUTPUT
value of x is : 3
value of y is : 4
value of z is : 5
after oprator overloading
value of x is : -3
value of y is : -4
value of z is : -5
*/