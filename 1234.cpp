#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void calculateAndDisplay() {
    int num1, num2;

    cout << "enter 2 number: ";
    cin >> num1 >> num2;

    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2);

    cout << "lcm of 2 number: " << gcdValue << endl;
    cout << "gcd of 2 number: " << lcmValue << endl;
}

int main() {
    calculateAndDisplay();
    return 0;
}
