//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to create student class with roll no,getnum() and putnum() another class test which have been derived from student in public mode having sub1,sub2 and function getmarks(),putmarks() and another class sport in public mode having sub3 and function getsport(),putsport() and another class result derived from test,sport in public mode having total() and display() and ptint the result students.  

//OBJECTIVE -to understand the implementation hybrid inheritance.

//EXPLANATION -In this program we create a class student to store the details of student and inherited with test class and and create sport class to inherited with test class with result.

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

class sport{
    protected:
    float sw;
    public:
    void getsport(){
        cout<<"enter the number of Subject 3 : ";
        cin>>sw;
    }
    void putsport(){
        cout<<"marks of subject 3 : "<<sw<<endl;
    }
};

class result:public test,public sport{
    protected:
    float total;
    public:
    void display(){
        total=sub1+sub2+sw;
        cout<<"Total : "<<total<<endl;
    }
};


int main(){
    result R[3];
    int i;
    for(i=0;i<3;i++){
        R[i].getnum();
        R[i].getmarks();
        R[i].getsport();
        R[i].putnum();
        R[i].putmarks();
        R[i].putsport();
        R[i].display();
    }
    getch();
    return 0;
}

/*OUTPUT

enter the Roll Number of student : 12

enter the number of Subject 1 : 23  
enter the number of Subject 2 : 24
enter the number of Subject 3 : 12
Roll Number : 12
marks of subject 1 & 2 : 23 24
marks of subject 3 : 12
Total : 59

enter the Roll Number of student : 11

enter the number of Subject 1 : 23
enter the number of Subject 2 : 25
enter the number of Subject 3 : 28
Roll Number : 11
marks of subject 1 & 2 : 23 25
marks of subject 3 : 28
Total : 76

enter the Roll Number of student : 144

enter the number of Subject 1 : 27
enter the number of Subject 2 : 38
enter the number of Subject 3 : 11
Roll Number : 144
marks of subject 1 & 2 : 27 38
marks of subject 3 : 11
Total : 76
*/