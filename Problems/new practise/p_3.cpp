//WAP to perform the addition of two complex numbers using the concept of constructors overloading and a friend function.
#include<iostream>
using namespace std;

class complex{
public:
    int real,img;
    complex(){
        real = 0;
        img = 0;
    }

    complex(int a, int b){
        real = a;
        img = b;
    }

    friend void sum(complex c1, complex c2);
};

void sum(complex c1,complex c2){
    complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    cout << "The sum of the complex numbers is: " << result.real << "+" << "(" << result.img << "i" << ")" << endl;
}
int main(){
    complex c1(2,6);
    complex c2(5,7);
    sum(c1,c2);
}