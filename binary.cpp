// Write a program to implement binary search on a sorted array.
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        return m;
        if (arr[m] < x)
        l = m + 1;
        else
        r = m - 1;
        }
        return -1;
        }
        int main() {
            int arr[] = {2, 3, 4, 10, 40};
            int n = sizeof(arr) / sizeof(arr[0]);
            int x = 10;
            int result = binarySearch(arr, n, x);
            if (result != -1)
            cout << "Element is present at index " << result;
            else
            cout << "Element is not present in array";
            return 0;
            }

