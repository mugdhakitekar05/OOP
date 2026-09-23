#include <iostream>
using namespace std;


class complex{
    int real,img;
    public:
   
    void accept(int a, int b){
    real=a;
    img=b;
    cout<<"\nEnter a and b:";
    cin>>real>>img;
}


void display(){
    cout<<real<<"+i\t"<<img;
}


complex operator+(complex c){
    complex sum;
    sum.real=real+c.real;
    sum.img=img+c.img;
    return sum;
}


complex operator-(complex c){
    complex sub;
    sub.real=real-c.real;
    sub.img=img-c.img;
    return sub;
}


complex operator*(complex c){
    complex mul;
    mul.real=real*c.real-img*c.img;
    mul.img=real*c.img+img*c.real;
    return mul;
}


complex operator/(complex c){
    complex div;
    div.real=real*c.real+img*c.img/(c.real*c.real+c.img*c.img);
    div.img=-real*c.img+img*c.real/(c.real*c.real+c.img*c.img);
    return div;
}

};


int main() {
    complex c1,c2,c3,c4,c5,c6;
   
    c1.accept(1,2);
    cout << "first complex no. is:\t";
    c1.display();
   
    c2.accept(3,5);
    cout << "second complex no. is:\t";
    c2.display();
   
    c3=c1+c2;
    cout<<"\naddition is:";
    c3.display();


    c4=c1-c2;
    cout<<"\nsubtraction is:";
    c4.display();


    c5=c1*c2;
    cout<<"\nmultiplication is:";
    c5.display();


    c6=c1/c2;
    cout<<"\ndivision is:";
    c6.display();


    return 0;
}

