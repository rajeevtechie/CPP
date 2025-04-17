#include<iostream>
using namespace std; 

//Function definition
int printName(){
    cout << "Rajeev Gupta\n";
    return 7;
}

int sum(int a, int b){
    return a+b;
}
int main()
{
    printName(); //function call.
    int val = printName(); //stores the return value of the function in val.
    cout << "value = " << val << endl;

    int a=7, b=9;
    cout << "The sum is: " << sum(a,b) << endl; //function call.
    cout << "The sum is: " << sum(5,10) << endl; //function call.
}