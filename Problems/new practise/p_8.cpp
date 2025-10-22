//WAP to implement Hierarchical inheritance.
/*Eg: 
create Employee and Student inheriting from Person using
Hierarchical Inheritance.
*/
#include<iostream>
using namespace std;

class person{
public: 
    string name;
    int age;
    string gender;
};

class employee: public person{
public: 
    int employee_id;
};