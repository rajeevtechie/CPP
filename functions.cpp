#include<iostream>
using namespace std; 

//Function definition
int printName(){
    cout << "Rajeev Gupta\n";
    return 7;
}
//function overloading:
int sum(int a, int b){
    cout << a+b << endl;
    return a+b;
}

int sum(double a, double b){
    cout << a+b << endl;
    return a+b;
}

int sum(double a, double b, double c){
    cout << a+b+c << endl;
    return a+b+c;
}
int main()
{
    int val = printName(); //function call.
    cout << "value = " << val << endl;

    sum(5,6);
    sum(2.5,7.9);
    sum(3,6.4,26.4);
}