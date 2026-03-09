#include<iostream>
using namespace std;    
void mergeIntervals(int intervals[][2], int n) {
    // Sort intervals based on the starting time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (intervals[j][0] > intervals[j + 1][0]) {
                swap(intervals[j], intervals[j + 1]);
            }
        }
    }

    int merged[n][2];
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (index == 0 || merged[index - 1][1] < intervals[i][0]) {
            merged[index][0] = intervals[i][0];
            merged[index][1] = intervals[i][1];
            index++;
        } else {
            merged[index - 1][1] = max(merged[index - 1][1], intervals[i][1]);
        }
    }

    cout << "Merged Intervals: " << endl;
    for (int i = 0; i < index; i++) {
        cout << "[" << merged[i][0] << ", " << merged[i][1] << "]" << endl;
    }
}