#include <iostream>
using namespace std;


class employee{
    char name[20];
    int id;
    float salary;

    public:
    void accept(){
        cout<<"\nName:";
        cin>>name;
        cout<<"ID:";
        cin>>id;
        cout<<"Salary:";
        cin>>salary;
    }

    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<salary<<endl;
    }

};


int main(){
    employee e[10];

    e[1].accept();
    cout<<"\nDetails:";
    e[1].display();

    e[2].accept();
    cout<<"\nDetails:";
    e[2].display();

    e[3].accept();
    cout<<"\nDetails:";
    e[3].display();


    return 0;


}





