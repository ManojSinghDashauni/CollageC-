// create a template function for swapping of 2 numbers.
#include <iostream>

using namespace std;
template <class T>

T swap(T a,T b){
    T c;
    c=a+b;
    b=c-b;
    a=c-b;
    cout<<"a : "<<a<<"\nb : "<<b<<endl;
    return 0;
}

int main()
{
    swap<int>(3,5);
    return 0;
}

/*
OUTPUT
a : 5
b : 3
*/