// create a template class.
#include <iostream>

using namespace std;
template <class T,class U>

class A{
    T x;
    U y;
    public:
    A(){
        cout<<"constructor called\n";
    }
};

int main()
{
    A<char,char> a;
    A<int, double> b;
    return 0;
}

/*
OUTPUT
constructor called
constructor called
*/