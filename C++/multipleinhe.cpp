
#include <iostream>
using namespace std;

class XYZ{
    int m;
    public:
    int getm(){
        cout<<"enter the value m :";
        cin>>m;
    }
    void putnum(){
        cout<<"m is : "<<m;
    }
};

class PQR{
    int w;
    public:
    int getw(){
        cout<<"enter the value w : ";
        cin>>w;
    }
    void putw(){
        cout<<"w is : "<<w;
    }
};

class ABC:public XYZ,public PQR{
    public:
    void display(){
       cout<<"total";
    }
};

int main(){
    ABC a;
    a.getm();
    a.getw();
    a.putnum();
    a.putw();
    a.display();
    return 0;
}