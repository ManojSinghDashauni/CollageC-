//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to store employee detail and number,Ename,designation in a class.derived a new class salary eith members as number of hour,hour rate then compute salary the employee and display details for the employee.

//OBJECTIVE -to understand the implementation single inheritance.

//EXPLANATION -In this program we create a class employee to store the details of employee and inherited with salary class.

//SOURCE CODE

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class employee{
    int empnum;
    string empnm,desig;
    public:
    void getdata(){
        cout<<"enter the number of employee : ";
        cin>>empnum;
        cout<<"enter the name of employee : ";
        cin>>empnm;
        cout<<"enter the designation of employee : ";
        cin>>desig;
    }
    void putdata(){
        cout<<"Number : "<<empnum<<endl;
        cout<<"Name : "<<empnm<<endl;
        cout<<"Designation : "<<desig<<endl;
    }
};

class salary:public employee{
    int num_of_hr,hr_rate,total;
    public:
    void gethr(){
        cout<<"enter the number of hour : ";
        cin>>num_of_hr;
        cout<<"enter the hour rate : ";
        cin>>hr_rate;
    }
    void showsal(){
        cout<<"Number Of Hour : "<<num_of_hr<<endl;
        cout<<"Hour Rate : "<<hr_rate<<endl;
        total=num_of_hr*hr_rate;
        cout<<"Total : "<<total<<endl;
    }
};

int main(){
    salary s;
    s.getdata();
    s.gethr();
    cout<<"\n----employee Details----\n\n";
    s.putdata();
    s.showsal();
    getch();
    return 0;
}
