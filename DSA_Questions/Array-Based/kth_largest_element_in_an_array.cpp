#include<iostream>
using namespace std;

int kthLargest(int arr[], int n, int k) {
    // Sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr[k - 1]; // Return the kth largest element
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int result = kthLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;
}