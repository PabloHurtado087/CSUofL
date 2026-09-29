#include <iostream>
using namespace std;

int main() {
    int farenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> farenheit;
    cout << "Temperature in Celsius: " << (farenheit - 32) * 5 / 9 << endl;
}