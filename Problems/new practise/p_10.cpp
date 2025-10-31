/*
Linear search with multiple occurrences  
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> linear_search(vector<int> arr,int target){
    vector<int> indices;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            indices.push_back(i);
        }
    }
    return indices;

}

int main(){
    vector<int> arr;
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    vector<int> index = linear_search(arr,target);
    if(index.size()!=0){
        cout << "Element is found at indices: ";
        for(int i=0; i<index.size(); i++){
            cout << index[i] << "\t";
        }
    }
    else{
        cout << "Element not found.";
    }
}