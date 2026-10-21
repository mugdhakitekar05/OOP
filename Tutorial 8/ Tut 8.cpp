#include <iostream>
using namespace std;

class BasicInfo{
protected:
    char name[30];
    int age;
    char address[50];

public:
    void acceptBasicInfo(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter Address:";
        cin>>address;
    }

    void displayBasicInfo(){
        cout<<"Name:"<<name<<"\n";
        cout<<"Age:"<<age<<"\n";
        cout<<"Address:"<<address<<"\n";
    }
};

class DeptInfo{
protected:
    char deptName[30];
    char natureofWork[30];

public:
    void acceptDeptInfo(){
        cout<<"Enter Department Name:";
        cin>>deptName;
        cout<<"Enter Nature of Work:";
        cin>>natureofWork;
    }

    void displayDeptInfo(){
        cout<<"Department:"<<deptName<<"\n";
        cout<<"Nature of Work:"<<natureofWork<<"\n";
    }
};

class Employee : public BasicInfo, public DeptInfo {
    int empId;

public:
    void accept(){
        cout<<"Enter Employee ID:";
        cin>>empId;
        acceptBasicInfo();
        acceptDeptInfo();
    }

    void display(){
        cout<<"\n--- Employee Details ---\n";
        cout<<"Employee ID:"<<empId<<"\n";
        displayBasicInfo();
        displayDeptInfo();
    }
};

int main(){
    Employee emp1, emp2;

    cout << "\nEnter Details for Employee 1\n";
    emp1.accept();

    cout << "\nEnter Details for Employee 2\n";
    emp2.accept();

    cout << "\n";
    emp1.display();
    emp2.display();

    return 0;
}





