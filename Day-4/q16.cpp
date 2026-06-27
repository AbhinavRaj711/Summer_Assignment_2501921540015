#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int orig_Num = num;
    int n_digits = 0;
    int result = 0;
    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n_digits++;
    }
    
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        result += pow(remainder, n_digits);
        temp /= 10;
    }
    
    return (result == num);
}

int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    
    cout << "Armstrong numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
