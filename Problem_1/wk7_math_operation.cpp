#include <iostream>
using namespace std;

//Ex.1 - function to calc mathematical operations
//32756_Ratu Faiha Salsabilla Rahmadina

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin>> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;

    return 0;
}