/*
Implement following sorting techniques: show passes
i. Bubble ii. Selection iii. Insertion
*/
#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> arr,int size){
    bool swap = false; //for optimizing the code.
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = true;
            }
        }

        if(swap == false){
            cout << "Array is already sorted.";
            break;
        }
        cout << "Pass: " << i+1 << ": ";
        for(int i: arr){
        cout << i << "\t";
        }
        cout << endl;

    }
    
}

void selection_sort(vector<int> arr, int size)
{
    int min_index,temp[10];
    bool swap = false;
    for(int i=0; i<size; i++){
        int min_index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;

            }
            
        }
        if(min_index!=i){
            temp[i] = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp[i];
            swap = true;
        }
        if(swap == false){
            cout << "Array is already sorted.";
            break;
        }

        cout << "Pass: " << i+1 << ": ";
            for(int i: arr){
                cout << i << "\t";
            }
            cout << endl;
    }
}

void insertion_sort(vector<int> arr, int size){
    
}

int main(){
    vector<int> arr = {11,22,5,6};
    vector<int> arr2 = {1,2,5,6,9};
    // bubble_sort(arr,4);
    // bubble_sort(arr2,5);

    selection_sort(arr,4);
    selection_sort(arr2,5);

    return 0;
}