#include<iostream>
using namespace std;
int main()
{
    
    /* Qn: to print the following pattern:
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    A B C D
    A B C D
    A B C D
    A B C D
    */
    for(int i=1; i<=4; i++)
    {
        char ch='A';  //we declare "A" inside internal loop because the staring value of each row is A.
        for(int j=1; j<=4; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    1 2 3
    4 5 6
    7 8 9
    */
    int num = 1;
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    A B C 
    D E F
    G H I
    */
    char ch = 'A';
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    *
    * * 
    * * * 
    * * * *
    */
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    * * * * 
    * * * 
    * * 
    *
    */
    for(int i=4; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    1
    2 2
    3 3 3
    4 4 4 4
    */
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    A 
    B B  
    C C C 
    D D D D 
    */
    char ch1 = 'A';
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << ch1 << " ";
        }
        ch1+=1;
        cout << endl;
    }

    /* Qn: to print the following pattern:
    1
    1 2
    1 2 3
    1 2 3 4
    */
    for(int i=0; i<=4; i++)
    {
        for(int j=1; j<i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    1
    2 1
    3 2 1 
    4 3 2 1
    */
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout << (i+1)-j << " ";
        }
        cout << endl;
    }
    // OR:
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j>=1; j--) //backward loop.
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    //Floyd's traingle pattern
    1
    2 3
    4 5 6
    7 8 9 10
    */
    int num2=1;
    for(int i=0; i<4; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << endl;
    }

    /* Qn: to print the following pattern:
    //Floyd's traingle pattern
    A
    B C
    D E F 
    G H I J
    */
    char ch3=65;
    for(int i=0; i<4; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            cout << ch3 << " ";
            ch3++;
        }
        cout << endl;
    }

    // print the following pattern: 
    //Inverted trainglular pattern.
    /*
    1 1 1 1
      2 2 2 
        3 3 
          4
    */
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(j<i){
                cout << "  ";
            }
            else{
            cout << " " << i ;
            }
        }
        cout << endl;
    }
    //OR:
    for(int i=0; i<4; i++)
    {
        //spaces:
        for(int j=0; j<i; j++ )
        {
            cout << "  ";
        }
        //numbers: 
        for(int j=0; j<4-i; j++)
        {
            cout << " " << i+1;
        }
        cout << endl;
    }
}