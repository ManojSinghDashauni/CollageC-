//using operator overloading friend function

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
        cout<<"value of x is "<<x<<endl;
        cout<<"value of y is "<<y<<endl;
        cout<<"value of z is "<<z<<endl;
    }
    
    friend void operator -(demo &d1);
};

void operator -(demo &d1){
    d1.x=-d1.x;
    d1.y=-d1.y;
    d1.z=-d1.z;
}

int main()
{
    demo d;
    d.getdata(3,4,5);
    d.display();
    -d;
    cout<<"after operator overloading"<<endl;
    d.display();
    return 0;
}

/*
output

value of x is 3
value of y is 4
value of z is 5
after operator overloading
value of x is -3
value of y is -4
value of z is -5
*/