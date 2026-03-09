#include<iostream>
using namespace std;

bool areRotations(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    string temp = str1 + str1; // Concatenate str1 with itself
    return temp.find(str2) != string::npos; // Check if str2 is a substring of temp
}
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (areRotations(str1, str2)) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }
    return 0;
}