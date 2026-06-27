#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int n, int digits) {
    if (n == 0){
         return 0;
    }
    int rev;
    rev=((n % 10) * pow(10, digits - 1)) + reverseNumber(n / 10, digits - 1);
    return rev;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    int temp = abs(n), digits = 0;
    while (temp > 0) {
         digits++; 
         temp /= 10; 
        }
    
    int result = reverseNumber(abs(n), digits);
    if (n < 0) {
        result = -result;
    }
    
    cout << "Reversed: " << result << endl;
    return 0;
}