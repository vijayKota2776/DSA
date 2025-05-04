// Write a program to sort an array using selection sort.
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
            min_idx = j;    
            }
            swap(arr[min_idx], arr[i]);
            }
            }
            
    int main() {
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
            int n = sizeof(arr) / sizeof(arr[0]);
            selectionSort(arr, n);
            cout << "Sorted array is \n";
            for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        return 0;
        }