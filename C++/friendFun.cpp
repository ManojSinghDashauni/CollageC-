//non member function friend
#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    friend int sum(demo d1);
};

int sum(demo d1){
    return int((d1.a*d1.a)+d1.b*d1.b);
}

int main(){
    demo d;
    d.set(10,20);
    cout<<"claculation is : ";
    cout<<sum(d);
    return 0;
}