#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) {
         digits++;
          temp /= 10;
         }
    temp = n;
    while (temp > 0) {
         sum += pow(temp % 10, digits);
          temp /= 10; }
    return sum == n;
}
int main() {
    int n;
    cout<<"enter number to check armstrong:"<<endl;
    cin >> n;
    cout << (isArmstrong(n) ? "armstrong" : "Not armstrong") << endl;
    return 0;
}