#include<iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxLength = 0;
    int start = 0;
    int index[256] = {-1}; // Assuming ASCII character set

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];
        if (index[currentChar] >= start) {
            start = index[currentChar] + 1; // Move start to the right of the last occurrence
        }
        index[currentChar] = end; // Update the last occurrence of the current character
        maxLength = max(maxLength, end - start + 1); // Update max length
    }
    return maxLength;
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}