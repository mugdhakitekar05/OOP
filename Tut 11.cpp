#include <iostream>
using namespace std;

template<typename T>
T add(T m,T n)
{return m+n;}

template<typename T>
T sub(T m,T n)
{return m-n;}


int main() {
    cout<<"\naddition is:";
    cout<<add(5,4);
    cout<<"\nsubtraction is:";
    cout<<sub(9,5);

    return 0;
}