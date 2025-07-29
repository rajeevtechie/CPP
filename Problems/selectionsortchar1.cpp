#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[10],temp[10];
    int i,j,n,mid_indx;
    
    cout << "Enter the  number of elements: ";
    cin >> n;
    
    cout << "Ente the elemets of array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    // cout << "Entered elements are: " << endl;
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << endl;
    // }
    
    for(int i=0; i<n; i++){
        mid_indx = i;
        for(int j=i+1; j<n; j++){
            if(arr[mid_indx]<arr[j]){
                mid_indx = j;
            }
        }
            if(mid_indx!=i){
                temp[i] = arr[i];
                arr[i] = arr[mid_indx];
                arr[mid_indx] = temp[i];
            }
    }
    
    cout << "reversed array is: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << "\t";
    }
}