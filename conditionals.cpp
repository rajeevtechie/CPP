#include<iostream>
using namespace std;
int main()
{
    // if-else:
    int age;
    cout << "Enter age:";
    cin >> age;
    if(age>=18)
    {
        cout << "Adult.";
    }
    else
    {
        cout << "Not an adult.";
    }

    // if-else if-else:
    int marks;
    cout << "enter marks out of 100: ";
    cin >> marks;
    if(marks>=90)
    {
        cout << "Grade: A";
    }
    else if(marks>=80 && marks<=89)
    {
        cout << "Grade: B";
    }
    else if(marks>=70 && marks<=79)
    {
        cout << "Grade: C";
    }
    else if(marks>=60 && marks<=69)
    {
        cout << "Grade: D";
    }
    else
    {
        cout << "Grade: Fail";
    }

    // Qn: WAP to find whether the character is lowercase or uppercase:
    char ch;
    cout << "enter the character: ";
    cin >> ch;
    if(ch>='A' && ch<='Z')
    {
        cout << "the character is uppercase.";
    }
    else {
        cout << "the character is lowercase.";
    }
    // OR,
    char ch1;
    cout << "enter the character: ";
    cin >> ch1;
    if(ch1>=56 && ch1<=90) //checking based on ASCII values.
    {
        cout << "the character is uppercase";
    }
    else{
        cout << "the character is lowercase";
    }

    // Ternary statement: 
    int runs;
    cout << "enter the runs scored: ";
    cin >> runs;
    cout << ((runs<100)?"Not a century":"Century") << endl;


    // Loops: 
    while loop: 
    int num1=1;
    while(num1<=7)
    {
        cout << num1 <<"\n";
        num1++;

    // For loop:
    for(int i=1; i<=10; i++)
    {
        cout << i << "\t";
    }

    // Qn: find the sum of numbers from 1 to n using for and wihle loop.
    int sum=0,i=1,n;
    cout << "enter the value of n: ";
    cin >> n;
    // for loop:
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    //while loop:
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << "the sum upto " << n << " is " << sum;

    //Qn: find the sum of odd numbers from 1 to N;
    int N,SUM = 0;
    cout << "enter the value of N: ";
    cin >> N;
    for(int j=1; j<=N; j+=2)
    {
        SUM = SUM + j;
    }
    cout << "the sum of odd upto " << N << " is " << SUM;
    
    // do-while loop:
    int k=1;
    do{
        cout << k << " ";
        k++;
    } while(k<=10);

    //Qn: WAP to check a number is prime or not.
    int num2;
    cout << "Enter the number: ";
    cin >> num2;

    if (num2 < 2) {
        cout << "The number is not a prime." << endl;
        return 0;
    }
    if (num2 == 2) {
        cout << "The number is prime." << endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i*i <= num2; i++) {
        if (num2 % i == 0) {
            isPrime = false; 
            break;
        }
    }

    // if (isPrime == true) {
        cout << "The number is a prime." << endl;
    } else {
        cout << "The number is not a prime." << endl;
    }


    // Nested loops:
    int n=7;
    for(int i=1; i<=n; i++)
    {
        int m=5;
        for(int j=1; j<=m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Qn: find the sum of all numbers from 1 to n which are divisible by 3.
    int num3, sum2=0;
    cout << "enter the value of n:";
    cin >> num3;
    for(int i=3; i<=num3; i+=3)
    {
        sum2+=i;
    }
    cout << "the sum = " << sum2;

    // OR:
    for(int i=3; i<=num3; i++)
    {
        if(i%3==0)
        {
            sum2=sum2+i;
        }
    }
    cout << "the sum = " << sum2;

    
    //Qn: print the factorial of a number n.
    int num4;
    cout << "enter the number: ";
    cin >> num4;
    int fact = 1;
    for(int i=1; i<=num4; i++)
    {
        fact = fact * i;
    }
    cout << "the factorial of " << num4 << " = " << fact;


    //Switch case:
    //program to find nth day of a week.
    int choice;
    cout << "Enter a number(1-7): ";
    cin >> choice;
    switch(choice){
        case 1: 
        cout << "Monday.";
        break;
        case 2: 
        cout << "Tuesday.";
        break;
        case 3: 
        cout << "Wednesday.";
        break;
        case 4: 
        cout << "Thursday.";
        break;
        case 5: 
        cout << "Friday.";
        break;
        case 6: 
        cout << "Saturday.";
        break;
        case 7: 
        cout << "Sunday";
        break;
        default:
        cout << "invalid choice";
    }

    return 0;
}


