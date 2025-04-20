//WAP to print all the prime numbers from 1 to N.
#include<iostream>
using namespace std;

int prime(int N);
int main()
{
    int num; 
    cout << "Enter the value of N: ";
    cin >> num;
    prime(num);
    return 0;
}
int prime(int num)
{
    for(int i=2; i<=num; i++)
    {
        int isPrime = true;
        for(int j=2; j<=i/2; j++)
        {
        if(i%j==0)
        {
            isPrime = false;
            break;
        }
        }
        if(isPrime == true)
        {
            cout << i << endl;
        }
    }
}
