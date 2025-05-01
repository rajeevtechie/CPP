//WAF to reverse an integer n.
#include<iostream>
#include<climits>
int reverseInt(int num);
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " ;
    cin >> num;
    cout << "Reverse = " << reverseInt(num) << endl;
}
reverseInt(int num)
{
    int rem,rev = 0;
    while(num!=0){
        rem = num % 10;
        num = num / 10;
        rev = rev*10 + rem;
    }
    return rev;
}