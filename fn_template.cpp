// FUNCTION TEMPLATE
#include<iostream>
using namespace std;
template <class T>
T findmax(T a,T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout << "MAX OF INTEGERS: " << findmax(10,20) << endl;
    cout << "MAX OF FLOATS: " << findmax(5.5f,3.2f) << endl;
    cout << "MAX OF CHARACTERS: " << findmax('A','Z') << endl;
    return 0;
}