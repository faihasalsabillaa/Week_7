#include <iostream>
using namespace std;

//Ex.2 - recurrence function to calc x factorial
//32756_Ratu Faiha Salsabilla Rahmadina

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n*factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    if (num > 0) {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }
    else { 
        cout << "Factorial isn't defined for negative numbers" << endl;
    }
    return 0;
}