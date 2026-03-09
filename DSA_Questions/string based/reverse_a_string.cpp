#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Reverse the string
    for (int i = 0; i < s.length() / 2; i++) {
        swap(s[i], s[s.length() - 1 - i]);
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}