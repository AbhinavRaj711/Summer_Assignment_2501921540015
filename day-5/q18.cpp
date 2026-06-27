#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    temp = n;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    
    if (sum == n) cout << n << " is a strong number.\n";
    else cout << n << " is not a strong number.\n";
    
    return 0;
}
