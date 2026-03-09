#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = "";
    int minLength = strs[0].length();

    // Find the minimum length among all strings
    for (const string& s : strs) {
        minLength = min(minLength, (int)s.length());
    }

    // Check each character position up to the minimum length
    for (int i = 0; i < minLength; i++) {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != currentChar) {
                return prefix;
            }
        }
        prefix += currentChar;
    }

    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}