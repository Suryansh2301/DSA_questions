#include<iostream>
using namespace std;

int intersectionOfTwoArrays(int arr1[], int arr2[], int n1, int n2) {
    int count = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result = intersectionOfTwoArrays(arr1, arr2, n1, n2);
    cout << "Count of intersection elements is: " << result << endl;
    return 0;
}