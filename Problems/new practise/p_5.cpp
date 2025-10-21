//WAP to implement Single inheritance
#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
    string gender;
    
    void introduction(){
        name = "Rajeev";
        age = 20;
        gender = "Male";
        cout << name << " is a " << gender <<  " of age " << age << endl;
    }
};

class employee: public person{
public:
    int id;

    void employee_id(){
        id = 150;
        cout << "Employee ID = " << id;
    }
};

int main(){
    employee p1;
    p1.introduction();
    p1.employee_id();
    return 0;
}