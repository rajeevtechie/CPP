//Program to convert any base to decimal and vice versa.
#include<iostream>
using namespace std;
void decimal_to_binary(){
    int num, rem, sum = 0, pow = 1;
    cout << "enter the number  in decimal: ";
    cin >> num;
    while(num!=0){
        rem = num%2;
        sum = sum + (rem*pow);
        pow = pow*10;
        num = num/2;
    }
    cout << "the binary number is: " << sum << endl;
}

void decimal_to_octal(){
    int num, sum=0, rem, pow=1;
    cout << "Enter the number in decimal: ";
    cin >> num;
    while(num!=0){
        rem = num%8;
        sum = sum + (rem*pow);
        pow = pow*10;
        num = num/8;
    }

    cout << "the number in octal is: " << sum << endl;
}

void decimal_to_hexadecimal(){
    int num, sum = 0, rem;
    char hex[20];
    int i=0;

    cout << "Enter the number in decimal: ";
    cin >> num; 
    while(num!=0){
        rem = num % 16;
        if(rem<10){
            hex[i] = rem + '0';
        }
        else{
            hex[i] = rem - 10 + 'A';
        }
        num = num/16;
        i++;
    }
    cout << "The number in hexadecimal is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }
    cout << endl;

}


void Binary_to_decimal(){
    int num,rem, pow=1,sum=0;
    cout << "Enter the number in binary: ";
    cin >> num;
    while(num!=0){
        rem = num%10;
        sum = sum + (rem*pow);
        num = num/10;
        pow = pow*2;
    }
    cout <<"the number in decimal is: "<< sum << endl;
}

void octal_to_decimal(){
    int num,rem,pow=1, sum = 0;
    cout << "Enter the octal number: ";
    cin >> num;
    while(num!=0){
        rem = num % 10;
        sum = sum + (rem*pow);
        num = num/10;
        pow = pow*8;
    }

    cout << "the decimal number is: " << sum << endl;
}


int main(){
    // Binary_to_decimal();
    // decimal_to_binary();

    // decimal_to_octal();
    // octal_to_decimal();

    decimal_to_hexadecimal();
}