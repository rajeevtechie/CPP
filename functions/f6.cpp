//Calculate "nCr" binomial coefficient for n and r.
#include<iostream>
using namespace std;
int combination(int n, int r);
int main()
{
    int n,r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    cout << "The value of nCr is: " << combination(n,r);
}
int combination(int n, int r)
{
    //calculating the factorial of n:
    int factn=1; 
    for(int i=1; i<=n; i++){
        factn = factn*i;
    }

    //calculating the factorial of r:
    int factr=1; 
    for(int i=1; i<=r; i++)
    {
        factr = factr*i;
    }

    //calculating the factorial of (n-r):
    int fact = 1;
    int newN = n-r;
    for(int i=1; i<=newN; i++){
        fact = fact*i;
    }

    //calculating nCr:
    int combination = (factn)/(factr*fact);
    return combination;
}