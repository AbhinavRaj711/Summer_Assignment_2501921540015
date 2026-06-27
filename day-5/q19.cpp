#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> factors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i * i != n) {
                factors.push_back(n / i);
            }
        }
    }
    
    sort(factors.begin(), factors.end()); // Optional: to print in order
    cout << "Factors: ";
    for (int f : factors) cout << f << " ";
    cout << endl;
    
    return 0;
}
