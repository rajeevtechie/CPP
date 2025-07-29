#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[10],key;
    int i,j,size;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements: ";
    for(i=0; i<size; i++){
        cin >> arr[i];
    }
    
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
