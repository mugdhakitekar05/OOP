#include <iostream>
using namespace std;

namespace s1{
    void disp()
    {cout<<"\ninside namespace 1";}
}

namespace s2{
    int x=100;
    int disp()
    {return 10*x;}
}

int main(){
    s1::disp();
    cout<<"\ninside namespace 2 return value:"<<s2::disp();
    return 0;
}
