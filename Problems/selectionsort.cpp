#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    int i,j,mid_indx,temp[10];
    
    cout << "Enter the  number of elements: ";
    cin >> n;
    
    cout << "Ente the elemets of array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Entered elements are: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    
    for(int i=0; i<n; i++){
        int swap = 0; //optimizing the code.
        mid_indx = i;
        for(int j=i+1; j<n; j++){
            if(arr[mid_indx]>arr[j]){
                mid_indx = j;
                swap = 1;
            }
            if(swap==0){
                cout << "the array is sorted.";
                return 0;
            }
        }
            if(mid_indx!=i){
                temp[i] = arr[i];
                arr[i] = arr[mid_indx];
                arr[mid_indx] = temp[i];
            }
    }
    
    cout << "sorted array is: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}