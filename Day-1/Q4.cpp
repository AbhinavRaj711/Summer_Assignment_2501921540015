#include <iostream>
using namespace std;

int main() {
    double num;
    int count = 0;
    cout << "Enter an integer: ";
    cin >> num;
    if(num<0){
        num=-1*num;                             //turning negative to positive 
    }
    if (num == 0) {                              // special case
        count = 1;
    } else {
        double temp = num; 
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Total number of digits: " << count << endl;
    return 0;
}
