//WAP to implement hybrid inheritance.
/*Eg: 
Create a base class student that stores the name and PRN of student. Derive two
classes UT_Marks and sports from the class student. Use the concept of Hybrid
Inheritance to derive the class result from the class UT_Marks and class sports.
*/
#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    int prn;
    
};

class UT_Marks: virtual public student{
public:
    float physics,chemistry,maths,total_UT_marks;

    void getstudent_data(){
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the PRN of the student: ";
        cin >> prn;
    }

    void get_UT_marks(){
        cout << "Enter the marks out of 20: " << endl;
        cout << "Enter the marks in physics: ";
        cin >> physics;
        cout << "Enter the marks in chemistry: ";
        cin >> chemistry;
        cout << "Enter the marks in maths: ";
        cin >> maths;

        total_UT_marks = physics + chemistry + maths;
        cout << "Total marks in UT out of 60 is = " << total_UT_marks << endl;
    }
};

class sports: virtual public student{
public:
    int sport_marks;
    void get_sports_marks(){
        cout << "Enter the marks in sports out of 40: ";
        cin >> sport_marks;
    }
};

class result: public UT_Marks, public sports{
public: 
    void final_result(){    
        cout << "------Final result-----" << endl;
        cout << "Name = " << name << endl;
        cout << "PRN = " << prn << endl;
        int total_marks = total_UT_marks + sport_marks;
        cout << "Total marks out of 100 is = " << total_marks << endl;
    }
};

int main(){
    result r1;
    r1.getstudent_data();
    r1.get_UT_marks();
    r1.get_sports_marks();
    r1.final_result();

    return 0;
}

