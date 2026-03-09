#include<iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            return arr[i];
        }
    }
    return -1; // No majority element found
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = majorityElement(arr, n);
    if (result != -1) {
        cout << "Majority element is: " << result << endl;
    } else {
        cout << "No majority element found" << endl;
    }
    return 0;
}