#include<iostream>
#include<string>
using namespace std;

class student{
    public:  //access modifier.
    //properties/sttributes
    string name;
    int prn;
    string dept;
    int age;

    //methods/member functions
    string changeDpt(string newDpt)
    {
        dept = newDpt;
        return dept;
    }

};

int main()
{
    student s1; //defining the object of the class.
    s1.name = "Rajeev Gupta";
    s1.prn = 240;
    s1.dept = "Computer Science and Engineering.";
    s1.age = 20;

    //accessing the values and printing.
    cout << "Student's Name: " << s1.name << endl;
    cout << "PRN: " << s1.prn << endl;
    cout << "Department: " << s1.dept << endl;
    cout << "Age: " << s1.age << endl;

    s1.changeDpt("Cloud Computing.");
    cout << "New Department: " << s1.dept << endl;

    return 0;
}