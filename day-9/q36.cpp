#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter side size: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print star for first/last row or first/last column
            if (i == 1 || i == n || j == 1 || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}