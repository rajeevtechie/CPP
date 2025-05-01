//Figure out how to find if a number is power of 2 with and without any loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num<=0){
        cout << "not";
    }
    //using loop:
    while(num % 2 == 0){
        num/=2;
    }
    if(num == 1){
        cout << "yes";
    }
    else{
        cout << "not";
    }

    //without using loop
    if ((num & (num - 1)) == 0) {
        cout << "yes";
    } else {
        cout << "not";
    }
}