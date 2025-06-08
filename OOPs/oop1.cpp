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
    void changeDpt(string newDpt)
    {
        dept = newDpt;
    }

};

int main()
{
    student s1; //defining the object of the class.
    s1.name = "Rajeev Gupta";
    s1.prn = 240;
    s1.dept = "Computer Science and Engineering.";
    s1.age = 20;

    //accessing the values and printing it.
    cout << s1.name << endl;
    cout << s1.prn << endl;
    cout << s1.dept << endl;
    cout << s1.age << endl;

    return 0;
}