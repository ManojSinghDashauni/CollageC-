//static data member

#include<iostream>
using namespace std;
class demo{
    static int count;
    int a;
    public:
    void getdata(int x){
        a=x;
        count++;
    }
    void getcount(){
        cout<<"value of count is : "<<count<<endl;
    }
};

int demo::count;
int main(){
    demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
    d1.getdata(100);
    d2.getdata(200);
    d3.getdata(300);
    d1.getcount();
    d2.getcount();
    d3.getcount();
    return 0;
}