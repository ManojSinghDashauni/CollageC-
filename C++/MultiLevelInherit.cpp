//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to create student class with roll no,getnum() and putnum() another class test which have been derived from student in public mode having sub1,sub2 and function getmarks(),putmarks() another class result derived from test in public mode having total() and display() and ptint the result students.  

//OBJECTIVE -to understand the implementation multi level inheritance.

//EXPLANATION -In this program we create a class student to store the details of student and inherited with test class and inherited with test class with result.

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

class test:public student{
    protected:
    float sub1,sub2;
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

class result:public test{
    protected:
    float total;
    public:
    void display(){
        total=sub1+sub2;
        cout<<"Total : "<<total<<endl;
    }
};


int main(){
    result R[3];
    int i;
    for(i=0;i<3;i++){
        R[i].getnum();
        R[i].getmarks();
        R[i].putnum();
        R[i].putmarks();
        R[i].display();
    }
    getch();
    return 0;
}

//OUTPUT

enter the Roll Number of student : 12
enter the number of Subject 1 : 45.3
enter the number of Subject 2 : 35.2

Roll Number : 12
marks of subject 1 & 2 : 45.3 35.2
Total : 80.5

enter the Roll Number of student : 13
enter the number of Subject 1 : 44.4
enter the number of Subject 2 : 33.4

Roll Number : 13
marks of subject 1 & 2 : 44.4 33.4
Total : 77.8

enter the Roll Number of student : 14
enter the number of Subject 1 : 23.5
enter the number of Subject 2 : 76.6

Roll Number : 14
marks of subject 1 & 2 : 23.5 76.6
Total : 100.1
