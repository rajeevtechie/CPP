//WAP to perform the addition of two complex numbers using the concept of operator overloading.
#include<iostream>
using namespace std;

class complex{
public:
    int real,img;
    
    complex(int a, int b){
        real = a;
        img = b;
    }

    //operator overloading
    complex operator +(complex &c2){
        int result_real = this->real + c2.real;
        int result_img = this->img + c2.img;
        complex c3(result_real,result_img);
        return c3;
    }
};
int main(){
    complex c1(2,5);
    complex c2(6,2);

    complex sum = c1+c2;
    cout << "sum = " << sum.real << "+" << sum.img << "i";
    return 0;
}