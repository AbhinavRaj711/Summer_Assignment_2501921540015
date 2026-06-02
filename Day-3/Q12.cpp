#include <iostream>
#include <algorithm>
using namespace std;

int lcm(int a, int b) {
    
    int greater = max(a, b);
    
  
    int smaller = min(a, b);
    
    for (int i = g; i <= a * b; i += g) {
        if (i % s == 0)
            return i;
    }
}

int main() {
    int a,b;
    cout<< "enter a and b to find lcm:"<<endl;
    cin >>a>>b ;
    cout << lcm(a, b);
    return 0;
}
