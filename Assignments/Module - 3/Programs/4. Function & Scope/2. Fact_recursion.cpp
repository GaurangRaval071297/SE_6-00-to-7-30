#include<iostream>
using namespace std;

int factorial(int g) {
    if (g == 0 || g == 1)
        return 1;
    else
        return g * factorial(g - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}