//no member friend for different class
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getdata(){
        a=10;
    }
    friend int square(A a1,B b1);
};

class B{
    int b;
    public:
    void getdata(){
        b=20;
    }
    friend int square(A a1,B b1){
        int sum=(a1.a*a1.a + b1.b*b1.b);
        return (sum);
    }
};

int main(){
    A a2;
    B b2;
    a2.getdata();
    b2.getdata();
    cout<<"claculation is : "<<square(a2,b2);
    return 0;
}