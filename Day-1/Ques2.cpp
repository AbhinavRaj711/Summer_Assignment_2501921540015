#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    
    // This loop runs as long as cin fails to read an integer
    while (!(cin >> num)) {
        cout << "Invalid input! Please enter a number: ";
        
        cin.clear();       
        cin.ignore(100, '\n'); 
    }

    // Printing the multiplication table
    cout << "\nMultiplication Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
