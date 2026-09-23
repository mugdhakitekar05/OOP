
#include <iostream>
using namespace std;


int area(int s1)
{return (s1*s1);}


int area(int l, int b)
{return (l*b);}


int main() {
    int s1;
    int l,b;

    cout<<"enter side of square:";
    cin>>s1;
    cout<<"area of square:"<<area(s1);

    cout<<"\nenter sides of rectangle:";
    cin>>l>>b;
    cout<<"area of rectangle:"<<area(l,b);

    return 0;
}

