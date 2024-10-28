#include <iostream>
using namespace std;

//Ex.3 - recurrence function to calc GDC
//32756_Ratu Faiha Salsabilla Rahmadina

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to calculate their GCD: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << "and " << num2 << "is " << gcd(num1, num2) << endl;

    return 0;
}