#include<iostream>
using namespace std;

char firstNonRepeatedCharacter(string str) {
    int count[256] = {0}; // Assuming ASCII character set

    for (char c : str) {
        count[c]++;
    }
    for (char c : str) {
        if (count[c] == 1) {
            return c; // Return the first non-repeated character
        }
    }
    return '\0'; // Return null character if no non-repeated character is found
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = firstNonRepeatedCharacter(str);
    if (result != '\0') {
        cout << "The first non-repeated character is: " << result << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }
    return 0;
}