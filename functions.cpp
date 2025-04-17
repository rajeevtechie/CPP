#include<iostream>
using namespace std; 

//Function definition
int printName(){
    cout << "Rajeev Gupta\n";
    return 7;
}
int main()
{
    int val = printName(); //function call.
    cout << "value = " << val;
}