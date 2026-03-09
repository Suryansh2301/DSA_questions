#include<iostream>
using namespace std;


bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) return false; // Anagrams must be of the same length

    int count[256] = {0}; // Assuming ASCII character set

    for (char c : str1) {
        count[c]++;
    }
    for (char c : str2) {
        count[c]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return false; // If any count is not zero, they are not anagrams
    }
    return true; // All counts are zero, they are anagrams
}
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}