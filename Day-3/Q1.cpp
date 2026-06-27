#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // 0and 1 are not prime
  
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;                                         // Exit 
    };
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0) {                      // i is a factor of n; i completely divides n; n is non-prime
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout <<n<< "number is Prime" << endl;
    } else {
        cout <<n<< "number is NOT Prime" << endl;
    }

    return 0;
}
