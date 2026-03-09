#include<iostream>
using namespace std;

void findPythagoreanTriples(int limit) {
    cout << "Pythagorean triples up to " << limit << ":" << endl;
    for (int a = 1; a <= limit; a++) {
        for (int b = a; b <= limit; b++) { // Start from a to avoid duplicates
            int cSquared = a * a + b * b;
            int c = static_cast<int>(sqrt(cSquared));
            if (c * c == cSquared && c <= limit) { // Check if c is an integer and within the limit
                cout << "(" << a << ", " << b << ", " << c << ")" << endl;
            }
        }
    }
}
int main() {
    int limit;
    cout << "Enter the limit for finding Pythagorean triples: ";
    cin >> limit;
    findPythagoreanTriples(limit);
    return 0;
}