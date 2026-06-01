#include <iostream>
using namespace std;

int main() {
    int originalNum, reversedNum = 0, temp;
    cout << "Enter an integer: ";
    cin >> originalNum;


    temp = originalNum;
    while (temp > 0) {
        int remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }

    if (originalNum == reversedNum && originalNum >= 0) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
    return 0;
}
