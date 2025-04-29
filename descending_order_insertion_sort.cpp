// Write a program to sort an array in descending order using insertion sort.
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j]; j--;}
            arr[j + 1] = key;
            }
    }
            
    void printArray(int arr[], int size) {
        int i;
            for (i = 0; i < size; i++)
            cout << arr[i] << " ";
            cout << endl;
        }
                
        int main() {
            int arr[] = {5, 2, 8, 1, 9};
            int n = sizeof(arr) / sizeof(arr[0]);
                cout << "Original array: ";
                printArray(arr, n);
                insertionSort(arr, n);
                cout << "Sorted array in descending order: ";
                printArray(arr, n);
        return 0;
        }