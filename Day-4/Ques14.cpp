#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n <= 0) return -1;
    
    int a = 0, b = 1,nextTerm=0; 
    if(n<=1){
        return n;
    }else{
        for(int i=2;i<=n;i++){
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
    }
    
    return nextTerm;
}

int main() {
    int n;
    cout << "Enter n to find nth Fibonacci term: ";
    cin >> n;
    
    cout << "Fibonacci  "<<n<<"th term: "<<Fibonacci(n);
    
    return 0;
}
