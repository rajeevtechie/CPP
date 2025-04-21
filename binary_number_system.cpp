#include<iostream>
using namespace std;
int main()
{
    //Decimal to binary:
    int dec;
    cout << "Enter the decimal number: ";
    cin >> dec;
    
    int remainder,sum=0,pow=1;
    while(dec!=0)
    {
        remainder = dec % 2;
        dec = dec/2;
        sum = sum + (remainder*pow);
        pow = pow*10;
    }
    cout << "In binary number system: " << sum << endl;


    //Binary to decimal:
    int binary;
    cout << "Enter the binary number: ";
    cin >> binary;

    int rem,ans = 0, power = 1;
    while(binary!=0)
    {
        rem = binary % 10;
        binary = binary /10;
        ans = ans + (rem*power);
        power *=2;
    }
    cout << "In decimal number system: " << ans << endl;
}