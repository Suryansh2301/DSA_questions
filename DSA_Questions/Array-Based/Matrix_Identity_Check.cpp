#include<iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    bool isIdentity = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    if (isIdentity) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }

    return 0;
}