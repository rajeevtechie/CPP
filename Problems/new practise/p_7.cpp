// WAP to implement Multilevel inheritance
/*Eg: 
create a class result derived from marks which itself is derived from
student using Multilevel Inheritance.
*/
#include<iostream>
#include<string>
using namespace std;
class student{
public: 
    string name,branch,batch;
    int prn,age;
    void student_details(){
        cout << "Enter the following student details: " << endl;
        cout << "Name: ";
        getline(cin,name);
        cout << "PRN: ";
        cin >> prn;
        cout << "Branch: ";
        cin >> branch;
        cout << "Batch: ";
        cin >> batch;
    }
    
};

class marks: public student{
public:
    int physics,maths,chemistry;
    void getdata(){
        cout << "Enter marks in Physics: ";
        cin >> physics;
        cout << "Enter marks in Maths: ";
        cin >> maths;
        cout << "Enter marks in Chemistry: ";
        cin >> chemistry;
    }
};

class result: public marks{
public: 
    void results(){
        cout << "-----Result------" << endl;
        cout << "Name: " << name << endl;
        cout << "PRN: " << prn << endl;
        cout << "Branch: " << branch << endl;
        cout << "Batch: " << batch << endl;
        cout << "----Marks----" << endl;
        cout << "Physics: " << physics << endl;
        cout << "Maths: " << maths << endl;
        cout << "Chemistry: " << chemistry << endl;
    }
};

int main(){
    result s1;
    s1.student_details();
    s1.getdata();
    s1.results();
    return 0;
}