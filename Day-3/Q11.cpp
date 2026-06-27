#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
  
    if (a == 0 || b == 0)
        return max(a, b);

    // a is greater
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }

    // b is greater
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}

int main()
{
    int a , b ;
    cout<< "enter a and b to find gcd"<<endl;
    cin >>a>>b ;
    cout << gcd(a, b);
    return 0;
}
