#include<iostream>
using namespace std;
// int a=5,b=7; //global variable.
int main()
{
    
    cout << (a & b) << endl; //0101 = 5, bitwise AND
    cout << (a | b) << endl; //111 = 7, bitwise OR
    cout << (a ^ b) << endl; //010 = 2, bitwise X-OR
    cout << (4 << 1 ) << endl; //1000 = 8, bitwise left shift operator.
    cout << (10 << 2) << endl; //101000 = 40 
    cout << (11 >> 1) << endl; //0101 = 5, bitise right shirt operator.
    cout << (12 >> 2) << endl; //0011 =3
    cout << (10 >> 3) << endl; // 0001 = 1

    //Pracise: 
    cout << (6 & 10) << endl;
    cout << (6 | 10) << endl;
    cout << (6 ^ 10) << endl;
    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;

    //Data type modifiers: 
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    int x = 10;
    long int y = 12;
    cout << sizeof(x+y) << endl; //it won't run if I simply do "int + long int" , bcz sizeof needs valid expression.

    unsigned int z = -10;
    cout << z << endl; // it won't print -10 bcz unsigned int can only store positive value.
    return 0;
}