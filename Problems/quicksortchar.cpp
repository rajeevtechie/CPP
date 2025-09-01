#include<iostream>
#include<string>
using namespace std;

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pivot = array[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (array[j] < pivot) {
                i++;
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        int temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;

        int pi = i + 1;

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    string array[100];
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    if (num < 1 || num > 100) {
        cout << "Invalid input size." << endl;
        return 1;
    }

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < num; i++) {
        cin>>array[i];
    }

    quickSort(array, 0, num - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout <<  array[i] << "\t";
    }

    return 0;
}