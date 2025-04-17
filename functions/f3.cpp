#include<iostream>
using namespace std; 
int sumN(int n){  //find the sum of number from 1 to N.
   int sum = 0; 
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}

int fact(int n){ //calculate the factorial of number N.
    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main()
{
   cout << "The sum is: " << sumN(8) << endl;
   
   cout << "the factorial is: " << fact(5);
}