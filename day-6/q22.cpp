#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    
    cout << "Decimal: " << decimal << endl;
    return 0;
}