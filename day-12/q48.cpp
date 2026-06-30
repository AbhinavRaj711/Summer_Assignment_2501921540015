#include <iostream>
using namespace std;




bool isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n && n > 0;
}
int main() {
    int n;
    cout<<"enter number to check perfect:"<<endl;
    cin >> n;
    cout << (isPerfect(n) ? "perfect" : "Not perfect") << endl;
    return 0;
}