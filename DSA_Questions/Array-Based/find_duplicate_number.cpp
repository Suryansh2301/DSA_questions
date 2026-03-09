#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; // No duplicate found
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findDuplicate(arr, n);
    if (result != -1) {
        cout << "Duplicate element is: " << result << endl;
    } else {
        cout << "No duplicate element found" << endl;
    }
    return 0;
}   