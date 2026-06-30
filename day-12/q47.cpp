#include <iostream>

using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b; 
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"enter number to print fibonacci:"<<endl;
    cin >> n;
    cout << "fibonacci series:";
     printFibonacci(n);
     cout<<endl;
    return 0;
}