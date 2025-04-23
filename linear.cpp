// Implement a linear search to find a given element in an array in c++.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int index = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                index = i;
                break;
                }
                }
        if (index != -1) {
            cout << "Element found at index " << index << endl;
            } 
        else {
                cout << "Element not found in array" << endl;
                }
        return 0;
    }