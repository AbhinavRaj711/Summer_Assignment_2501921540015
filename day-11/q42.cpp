#include <iostream>
using namespace std;

int getMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Maximum: " << getMax(x, y) << endl;
    return 0;
}