#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) return;
    
    int a = 0, b = 1, nextTerm;
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        cout << nextTerm << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter no. of terms to find Fibonacci: ";
    cin >> n;
    
    cout << "Fibonacci Series: ";
    printFibonacci(n);
    
    return 0;
}
