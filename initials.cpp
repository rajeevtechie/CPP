#include<iostream>
using namespace std;
int main()
{
    int age = 23;
    float pi = 3.14f;
    char ch = 'R';
    bool value = true;
    double num = 32.2;
 
    cout << age << "\n";
    cout << pi << "\n";
    cout << ch << "\n";
    cout << value << "\n";
    cout << num << "\n";

    //Type casting
    //implicit typecast
    char grade = 'R';
    int value = grade;
    cout << value;

    //explicit typecast
    double price = 98.231;
    int newP = price;
    cout << newP;

    //taking input from user:
    int num;
    cout << "Enter a number.";
    cin >> num;
    cout << "Entered number is: " << num;


    int a,b,c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Entered three numbers are: " << a << "," << b << "," << c;

    // Operators:
    // Arithmetic:
    // Qn: Take input from user and perform few mathematical operations on it.
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The sum of the numbers is: " << num1+num2 << endl;
    cout << "The difference of the numbers is: " <<num2-num1 << endl;
    cout << "The product of the numbers is: " << num1*num2 << endl ;
    cout << "The division of the numbers is: " << (float)num2/num1 << endl;
    cout << "The Remainder of the numbers is: " << num2%num1 << endl;

    // Relational:
    cout << (10<6) << endl; //false --> 0;
    cout << (10>6) << endl; //True --> 1;
    cout << (10>=6) << endl; //true --> 1;
    cout << (10>=6) << endl; //True --> 1;
    cout << (10==6) << endl; //false --> 0;
    cout << (10!=6) << endl; //true --> 1;

    // Logical:
    cout << !(10<6) << endl; //true --> 1;
    cout << ((10<6) || (11>7)) << endl; //true --> 1;
    cout << ((10<6) && (12>8)) << endl; //false --> 0;

    // Unary operator: increment and decrement operators.
    int m = 15;
    int n=m++; //Pehle kaam, phir update.
    cout << "n =" << n << endl; // n =15
    cout << "m =" << m << endl; // m =16

    int k = 11;
    int l=++l; //Pehle update, phir kaam.
    cout << "l =" << l << endl; // n =12
    cout << "k =" << k << endl; // m =11

    return 0;
}