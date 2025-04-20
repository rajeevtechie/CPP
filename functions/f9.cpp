//WAP to find the fibonacci series upto n terms.
#include<iostream>
using namespace std;

int fibonacci(int num);
int main()
{
    int num;
    cout << "Enter n: ";
    cin >> num;
    fibonacci(num);

    return 0;
}
int fibonacci(int num)
{
    int a=0, b=1, c;
    cout << a << "\t" << b << "\t";
    for(int i=1; i<=num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
        cout << c << "\t";
    }
    return 0;
}