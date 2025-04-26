#include<iostream>
#include <climits>
#include <algorithm>
int changeArr(int arr[], int size);
int linearSearch(int arr[], int size, int key);
int reverseArray(int arr[], int size);
using namespace std;
int main()
{
    //array initialization:
    int age[5] = {2,6,23,65,23}; //with defined size
    int price[] = {2,35,235,1}; // without defined size
    cout << price[2] << endl; //prints the value of price at index 2 ie 235.
    cout << price[5]; //it will throw warning or may print garbage value since i'm trying to print something out of index value.

    //Loops on arrays:
    int marks[10],size;
    cout << "enter the number of students: ";
    cin >> size;
    cout << "enter the marks of students: ";
    for(int i=0; i<size; i++)
    {
        cin >> marks[i];
    }

    cout << "Entered marks are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << marks[i] << endl;
    }

    //Qn: find the smallest and largest number in an array:
    int arr[] = {1,53,65,-34,23,34,23};
    int size = sizeof(arr)/sizeof(int);
    int max2 = arr[0], mini = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max2)
        {
            max2 = arr[i];
        }

        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    cout << "largest = " << max2 <<  endl;
    cout << "smallest = " << mini << endl;
    
    // // OR
    int arr1[] = {2,24,65,-28,-87,90};
    int size1 = sizeof(arr1)/sizeof(int);
    int max1 = INT_MIN, mini1 = INT_MAX; //(INT_MAX = plus infinity and INT_MIN = minus infinity(we need to include <climits> for it.))
    for(int i = 0; i<size1; i++)
    {
        mini1 = min(arr1[i],mini1); //min is already a predefined function whose logic is implecitely defined. 
        max1 = max(arr1[i],max1); //same as min.max(x,y) returns the maximum value between x and y.
    }
    cout << "largest = " << max1 << endl;
    cout << "smallest = " << mini1 << endl;


    //Pass by reference: 
    int arr4[]={1,2,4,5,2};
    int size4 = sizeof(arr4)/sizeof(int);
    changeArr(arr4 , size4);
    
    cout << "modified array in main: " << endl;
    for(int i=0; i<size4; i++)
    {
        cout << arr4[i] << "\t"; //20 2 40 5 2
    }


    //Linear Search:
    int arr5[] = {1,25,4,3,2,6};
    int size5 = sizeof(arr5)/sizeof(int);
    cout << "Element is found at index: " << linearSearch(arr5,size5,4); 


    //Reverse an Array:
    int arr6[]={1,2,3,4,5}; //odd no. of elements.
    int size6 = sizeof(arr6)/sizeof(int);

    int arr7[]={5,6,8,9,10,12}; // even no. of elements.
    int size7 = sizeof(arr7)/sizeof(int);

    //reversing arr6:
    reverseArray(arr6,size6);
    for(int i=0; i<size6; i++)
    {
        cout << arr6[i] << " ";
    }
    cout << endl;

    //reversing arr7:
    reverseArray(arr7,size7);
    for(int i=0; i<size7; i++)
    {
        cout << arr7[i] << " ";
    }
    cout << endl;


    return 0;

}

int changeArr(int arr[], int size)
{
    arr[0] = 20; //modifies the first element to 20 in the original array.
    arr[2] = 40; //modifies the third element to 40 in the original array.

    return 0;
}
int linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int reverseArray(int arr[], int size)
{
    int start=0, end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

