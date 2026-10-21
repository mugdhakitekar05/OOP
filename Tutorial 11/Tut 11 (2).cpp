#include <iostream>
using namespace std;

template<class T>
class calculator{
    T num1,num2;
    public:
    calculator(T n1,T n2){
        num1=n1;num2=n2;
    }
    T add()
    {return num1+num2;}
};


int main() {
    calculator<int> c1(5,4);
    calculator<double> c2(5.2,4.3);
    cout<<"\ninteger addition is:\t"<<c1.add();
    cout<<"\ndouble addition is:\t"<<c2.add();

    return 0;

}
