//non member friend for different class
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getdata(){
        a=10;
    }
    friend class B;//whole class
};

class B{
    int b;
    public:
    void getdata(){
        b=20;
    }
    void compute(A a1){
        int sum=a1.a+b;
        cout<<"claculation is : "<<sum;
    }
};

int main(){
    A a2;
    B b2;
    a2.getdata();
    b2.getdata();
    b2.compute(a2);
    return 0;
}