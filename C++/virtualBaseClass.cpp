//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to implementation of virtual base class.

//OBJECTIVE -to understand the implementation of virtual base class.

//EXPLANATION -In this program we create a class demo and store data and use virtual base class.

//SOURCE CODE

#include <iostream>
#include <conio.h>
using namespace std;

class student{
    protected:
    int roll_num;
    public:
    void getnum(){
        cout<<"\nenter the Roll Number of student : ";
        cin>>roll_num;
    }
    void putnum(){
        cout<<"Roll Number : "<<roll_num<<endl;
    }
};

class test:virtual public student{
    protected:
    int sub1,sub2;
    public:
    void getmarks(){
        cout<<"\nenter the number of Subject 1 : ";
        cin>>sub1;
        cout<<"enter the number of Subject 2 : ";
        cin>>sub2;
    }
    void putmarks(){
        cout<<"marks of subject 1 & 2 : "<<sub1<<" "<<sub2<<endl;
    }
};

class sport:virtual public student{
    protected:
    int sub3;
    public:
    void getsport(){
        cout<<"enter the number of Subject 3 : ";
        cin>>sub3;
    }
    void putsport(){
        cout<<"marks of subject 3 : "<<sub3<<endl;
    }
};

class result:public test,public sport{
    protected:
    int total;
    public:
    void display(){
        total=sub1+sub2+ sub3;
        cout<<"Total : "<<total<<endl;
    }
};


int main(){
    result R;
    R.getnum();
    R.getmarks();
    R.getsport();
    R.putnum();
    R.putmarks();
    R.putsport();
    R.display();
    getch();
    return 0;
}

/*
OUTPUT


enter the Roll Number of student : 21041616

enter the number of Subject 1 : 34
enter the number of Subject 2 : 56
enter the number of Subject 3 : 23
Roll Number : 21041616
marks of subject 1 & 2 : 34 56
marks of subject 3 : 23
Total : 113
*/