#include<iostream>
#include<string>
using namespace std;

class teacher{
    public: 
    //Non-parameterized constructor:
    teacher(){
        dept = "Computer Science";
    }

    //Parameterized constructor:
    teacher(string n,string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    teacher(string name,string dept, string subject) //here we can't create another constructor with same(number, order, type) parameter(we can create with same number of parameters but with different order or different data type).otherwise it'll show compilation error.
    {
        this->name = dept; //"this" points to the current object(it means that "name" in left is of the object not of the parameter.)
        (*this).dept = name; //another syntax for "this" pointer.
        this->subject = subject;
    }

    //Custom copy constructor:
    teacher(teacher &orgObj){
        cout << "this is a custom copy constructor." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    string name;
    string dept;
    string subject;
    double salary;
};
int main()
{
    // teacher t1; //constructor call.it'll set the dept to computer science
    // t1.name = "Rajeev Gupta";
    // t1.subject = "CPP";
    // t1.salary = 500000;

    // cout << t1.name << endl;
    // cout << t1.dept << endl; //we haven't provided dept in t1,instead we have done it in constructor. so it'll update dept to computer science each time its being called.
    // cout << t1.subject << endl;
    // cout << t1.salary << endl;

    // //Non-parameterized constructor:
    // teacher t2; //here again constructor is called for the third object(t3). 
    // cout << t2.dept << endl; //"Computer Science" since dept is already being set as computer science in constructor.

    // //Parameterized constructor:
    teacher t3("Ram","computer science","cpp" , 60043);
    // cout << t3.name << endl;
    // cout << t3.dept << endl; // here we need to provide department since all constructors are independent functions so it won't extract the dept value from the other constructor as Computer Science.
    // cout << t3.subject << endl;
    // cout << t3.salary << endl;

    teacher t4("Shyam","computer science","cpp"); //here we can't define the same parameter again 
    // cout << t4.name << endl;
    // cout << t4.dept << endl;
    // cout << t4.subject << endl;

    //Copy constructor:
    teacher t5(t4); //default copy constructor.for this we haven't created any custom copy constructor, we have just copied the values in teacher t4.
    cout << t5.name << endl;
    cout << t5.dept << endl;
    cout << t5.subject << endl;

    teacher t6(t3); //custom copy constructor, i have created a custom copy constructor above .
    cout << t6.name << endl;
    cout << t6.dept << endl;
    cout << t6.subject << endl;
    cout << t6.salary << endl;


    return 0;
}