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

    void get_employee_data(){
        cout << "Enter the following employee details: " << endl;
        // cin.ignore(); //ignores the newline character from input buffer.
        cout << "Name = " ;
        getline(cin, name);
        cout << "Age = ";
        cin >> age;
        cout << "Gender = ";
        cin >> gender;
        cout << "Employee_ID = ";
        cin >> employee_id;
    }

    void display_employee_info(){
        cout << "---Displaying the employee details---" << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
        cout << "Employee_ID = " << employee_id << endl;
    }
};

class student: public person{
public:
    int prn;
    string branch,batch;
    float cgpa;

    void get_student_data(){
        cout << "Enter the following Student details: " << endl;
        cout << "Name = " ;
        cin.ignore(); //ignores the newline character from input buffer.
        getline(cin,name);
        cout << "Age = ";
        cin >> age;
        cout << "Gender = ";
        cin >> gender;
        cout << "PRN = ";
        cin >> prn;
        cout << "Branch = ";
        cin >> branch;
        cout << "Batch = ";
        cin >> batch;
        cout << "CGPA = ";
        cin >> cgpa;
    }

    void display_student_info(){
        cout << "---Displaying the student details---" << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
        cout << "PRN = " << prn << endl;
        cout << "Branch = " << branch << endl;
        cout << "Batch = " << batch << endl;
        cout << "CGPA = " << cgpa << endl;
    }
};

int main(){
    employee e1;
    e1.get_employee_data();
    e1.display_employee_info();

    student s1;
    s1.get_student_data();
    s1.display_student_info();

    return 0;
}