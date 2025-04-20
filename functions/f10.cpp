//WAP to print the nth fibonacci.
#include<iostream>
using namespace std;

int fibonacciN(int n);
int main()
{
    int num;
    cout << "Enter n: ";
    cin >> num; 
    fibonacciN(num);

    return 0;
}
int fibonacciN(int num)
{
    int a=0, b=1, c;
    if(num == 1){
        cout << a << endl;
        return 0;
    }
    else if(num == 2){
        cout << b << endl;
        return 0;
    }
    for(int i=1; i<=num-2; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}