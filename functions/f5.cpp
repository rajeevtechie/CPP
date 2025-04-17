//find the sum of digits of a number.
#include<iostream>
using namespace std; 

int sumDigits(int num);

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The sum of digits of " << num << " is: " << sumDigits(num);

}
int sumDigits(int num)
{
    int sum = 0;
    while(num!=0)
    {
        int lastDigit = num % 10;
        num = num/10;
        sum += lastDigit;
    }

    return sum;
}
