//WAP to swap the max and min number of an array.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "How many numbers: ";
    cin >> num;
    int arr[num];
    cout << "Enter the numbers: ";
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    
    //Displaying the array: 
    for(int i = 0; i<num; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    int minIndex = 0, maxIndex = 0;
    for(int i=0; i<num; i++)
    {
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
    }
    cout << "Before swaping: " << endl;
    cout << "MIN = " << arr[minIndex] << "," << "MAX = " << arr[maxIndex] << endl;

    swap(arr[maxIndex],arr[minIndex]);
    cout << "After swaping: " << endl;
    cout << "MIN = " << arr[minIndex] << "," << "MAX = " << arr[maxIndex] << endl;

    //Displaying the array after swaping: min and max value in array gets swapped.
    for(int i = 0; i<num; i++)
    {
        cout << arr[i] << " " ;
    }
}