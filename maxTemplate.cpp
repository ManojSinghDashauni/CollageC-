// create a template function for find maximum number.
#include <iostream>

using namespace std;
template <class T>

T maxi(T x,T y){
    return ((x>y)?x:y);
}

int main()
{
    cout<<"maximum is = " <<maxi<int>(3,5);
    cout<<"\nmaximum is = " <<maxi<char>('A','G');
    return 0;
}

/*
OUTPUT
maximum is = 5
maximum is = G
*/