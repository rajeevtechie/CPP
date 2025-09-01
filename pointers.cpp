#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *ptr = &a; //pointer variable.
    int **ptr2 = &ptr; //pointer to pointer variable.
    
    cout << "The value of ptr(address of a) is: " << ptr << endl;
    cout << "the value of ptr2(address of ptr) is " << ptr2 << endl;
    cout << "the value of 'a' using *ptr: " << *ptr << endl;
    cout << "the value of 'a' uisng **ptr2 : " << **ptr2 << endl;

    //dereferencing operator(*);
    cout << "the value of 'a'(using dereferencing operator): " << *(&a) << endl;

    *ptr = 20; //changing the value using (*).
    cout << "new value of 'a' is: " << a << endl;
    return 0;
}