#include <iostream>
using namespace std;

// minimum of two numbers: 
int min(int a, int b ){
    if(a<b){
        cout << a << " is minimum.";
    }
    else{
        cout << b << " is minimum";
    }
}

int main() {
    min(5,8); //calculates which one is minimum.
    return 0;
}