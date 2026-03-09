#include<iostream>
using namespace std;
int countPairsWithSum(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = countPairsWithSum(arr, n, target);
    cout << "Count of pairs with sum " << target << " is: " << result << endl;
    return 0;
}