#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //Properties:
    private: //data hiding
    double salary; //we can't access the salary directly now since its private member of the class.

    public: //we can access all the properties below it(since "public" access modifier is used.)
    string name;
    string dept;
    string subject;

    //method
    string changeDpt(string newDpt)
    {
        dept = newDpt;
        return dept;
    }

    //accessing the private value using function:
    //setter function:
    void setSalary(double s){
        salary = s;
    }

    //getter function:
    double getSalary(){
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Rajeev Gupta";
    t1.dept = "Computer Science and Engineering";
    t1.subject = "OOPs";
    t1.setSalary(150000); //private members are also accessed and provided a value.

    cout << "Teacher's Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    
    cout << "New Department: " << t1.changeDpt("AIML") << endl;
}