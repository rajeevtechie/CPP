//WAF to print all the unique values in an array.
#include<iostream>
int uniqueValue(int arr[],int size);
using namespace std;
int main()
{
    int size;
    cout << "How many numbers: ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers: ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Unique values: " << endl;
    uniqueValue(arr,size);
    return 0;
}
int uniqueValue(int arr[], int size)
{
    
    for(int i=0; i<size; i++)
    {
        int a = 0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                a++;
            }
        }
        if(a==1)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}