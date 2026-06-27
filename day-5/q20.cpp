#include <iostream>
using namespace std;

int main() {
    long long n, maxPrime = -1;
    cout << "Enter a number: ";
    cin >> n;
    
    // Divide by 2 as much as possible
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    
    // Check odd numbers up to square root of n
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    
    // If n is still greater than 2, it is the largest prime factor itself
    if (n > 2) maxPrime = n;
    
    cout << "Largest Prime Factor: " << maxPrime << endl;
    return 0;
}
