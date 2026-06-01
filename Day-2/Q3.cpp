#include <iostream>
using namespace std;

int main() {
    int num;
    int product = 1;
    cout << "Enter an integer: ";
    cin >> num;
    if(num<0){
        num=-num;
    }

    if (num == 0) {
        product = 0;
    } else {
        int temp = num;
        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;
        }
    }

    cout << "Product of digits: " << product << endl;
    return 0;
}
