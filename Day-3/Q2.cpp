#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower, upper;
    cout << "Enter lower bound and upper bound of the range: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower<< " and " << upper << " are: " << endl;

    for (int i = lower; i <= upper; ++i) {
        if (i <= 1) continue; // Skip numbers less than or equal to 1

        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
