#include <iostream>
using namespace std;

int main() {
    int n, sum = 1; // 1 is always a proper divisor for n > 1
    cout << "Enter a number: ";
    cin >> n;
    
    if (n <= 1) {
        cout << n << " is not a perfect number.\n";
        return 0;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i; // Add the paired divisor
            }
        }
    }
    
    if (sum == n) cout << n << " is a perfect number.\n";
    else cout << n << " is not a perfect number.\n";
    
    return 0;
}
