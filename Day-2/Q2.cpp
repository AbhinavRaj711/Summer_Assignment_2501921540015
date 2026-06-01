#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    int num1=num;
    if(num<0){
        num=-num;
    }

    int temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }

    // Restore negative sign if the original input was negative
    if (num1 < 0) {
        reversedNum = -reversedNum;
    }

    cout << "Reversed Number: " << reversedNum << endl;
    return 0;
}
