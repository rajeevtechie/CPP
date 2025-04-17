#include<iostream>
using namespace std; 

int fun(int a, int b){ 
    a = a + 10; 
    b = b + 20;
    return a+b;
}
int main()
{   
    int a=8, b=12; 
    cout << fun(a,b) << endl; //here a copy value of a and b is created .
    cout << a << endl; // a=8, not 18, because the copied value a is being passed into the function which if changed does not reflect in the main function.
    cout << b << endl; // b = 12, not 32

}