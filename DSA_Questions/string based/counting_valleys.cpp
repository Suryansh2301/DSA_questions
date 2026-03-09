#include<iostream>
using namespace std;

int countValleys(string path) {
    int valleys = 0;
    int altitude = 0;

    for (char step : path) {
        if (step == 'U') {
            altitude++;
            if (altitude == 0) {
                valleys++; // Coming up to sea level from a valley
            }
        } else if (step == 'D') {
            altitude--;
        }
    }
    return valleys;
}
int main() {
    string path;
    cout << "Enter the path (U for up, D for down): ";
    cin >> path;

    int result = countValleys(path);
    cout << "Number of valleys: " << result << endl;

    return 0;
}