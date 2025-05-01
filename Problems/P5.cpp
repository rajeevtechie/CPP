//WAF to print intersection of 2 arrays.
#include<iostream>
int intersectionElement(int arr1[], int size1, int arr2[], int size2);
using namespace std;
int main()
{
    int size1, size2;
    cout << "enter the number of elements in array 1 and 2 respectively: ";
    cin >> size1 >> size2;
    int arr1[size1],arr2[size2];
    cout << "Enter the elements of array 1: ";
    for(int i=0; i<size1; i++){
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Enter the elements of array 2: ";
    for(int i=0; i<size2; i++){
        cin >> arr2[i];
    }
    cout << "Intersection elements are: " << endl;
    intersectionElement(arr1,size1,arr2,size2);
}
int intersectionElement(int arr1[],int size1, int arr2[], int size2)
{
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << endl;
                break;
            }
        }
    }
}