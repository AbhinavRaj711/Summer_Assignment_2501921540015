#include <iostream>
using namespace std;

int main() {
    int num, temp;
    int sum = 0;
    cout << "Enter an integer: ";    //invalid character will result in sum=0
    cin >> num;
    if(num<0){
      num=-1*num;
    }

    temp = num; 
    while (temp > 0) {
        sum += temp % 10; // adding last digit to sum
        temp /= 10;       // discarding the last digit
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
