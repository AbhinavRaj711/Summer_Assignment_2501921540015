#include <iostream>
using namespace std;

long long getFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int n;
    cout<<"enter number n:";
    cin >> n;
    cout << "factorial of"<<n<<"="<<getFactorial(n) << endl;
    return 0;
}