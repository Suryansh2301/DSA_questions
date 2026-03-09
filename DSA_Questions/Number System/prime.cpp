#include<iotream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false; // If n is divisible by any number other than 1 and itself
    }
    return true; // n is prime
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}