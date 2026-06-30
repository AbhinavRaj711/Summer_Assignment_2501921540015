#include <iostream>
using namespace std;

int getSum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Sum: " << getSum(x, y) << endl;
    return 0;
}