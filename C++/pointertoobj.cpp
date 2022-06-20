//pointer to object

#include<iostream>
using namespace std;
class demo{
    int code;
    float price;
    public:
    void getdata(int c,float p){
        code=c;
        price=p;
    }
    void putdata(){
        cout<<code<<"\n"<<price<<endl;
    }
};

int main(){
    demo d1;
    demo *ptr=&d1;
    
    ptr->getdata(10,20);//use pointer
    (*ptr).putdata();//use pointer another
    d1.getdata(20,30);
    d1.putdata();
    return 0;
}