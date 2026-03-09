#include<iostream>
using namespace std;

char firstUniqueCharacter(string str) {
    int count[256] = {0}; // Assuming ASCII character set

    for (char c : str) {
        count[c]++;
    }
    for (char c : str) {
        if (count[c] == 1) {
            return c; // Return the first unique character
        }
    }
    return '\0'; // Return null character if no unique character is found
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = firstUniqueCharacter(str);
    if (result != '\0') {
        cout << "The first unique character is: " << result << endl;
    } else {
        cout << "No unique character found." << endl;
    }
    return 0;
}