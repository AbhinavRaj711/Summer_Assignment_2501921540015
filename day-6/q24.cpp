#include <iostream>
using namespace std;

int main() {
    double x; 
    int n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;
    
    double result = 1.0;
    long long nn = n;
    
    if (nn < 0) nn = -1 * nn;
    
    while (nn > 0) {
        if (nn % 2 == 1) { // If power is odd
            result = result * x;
            nn = nn - 1;
        } else {           // If power is even
            x = x * x;
            nn = nn / 2;
        }
    }
    
    if (n < 0) result = 1.0 / result;
    
    cout << "Result: " << result << endl;
    return 0;
}