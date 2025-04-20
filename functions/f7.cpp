//WAP to check if a number is prime or not.
#include<iostream>
using namespace std;

int prime(int num);
int main()
{
    int num; 
    cout << "Enter the number: ";
    cin >> num;
    prime(num);
    return 0;
}
int prime(int num)
{
    if(num==1){
        cout << "neither prime nor composite.";
        return 0;
    }
    int isPrime = true;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true)
    cout << "The number is Prime.";
    else
    cout << "The number is not Prime.";
}