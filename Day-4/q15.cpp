#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, orig_Num, remainder, result = 0, n_digits = 0;
    cout << "Enter an integer: ";
    cin >> n;
    
    orig_Num = n;
    
    // Count number of digits
    while (orig_Num != 0) {
        orig_Num /= 10;
        n_digits++;
    }
    
    orig_Num = n;
    
    // Calculate the result
    while (orig_Num != 0) {
        remainder = orig_Num % 10;
        result += pow(remainder, n_digits);
        orig_Num /= 10;
    }
    
    if (result == n) cout << n << " is an Armstrong number.\n";
    else cout << n << " is not an Armstrong number.\n";
    
    return 0;
}
