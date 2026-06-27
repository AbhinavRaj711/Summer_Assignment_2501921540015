#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n > 0) {
        n = n & (n - 1); // Clears the lowest set bit
        count++;
    }
    
    cout << "Set bits: " << count << endl;
    return 0;
}