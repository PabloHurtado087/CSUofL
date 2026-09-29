//
// code to calculate the area and perimeter of a rectangle
//
#include <iostream>

using namespace std;

int main() {
    double length, width;
    cout << "What is the length of the rectangle? ";
    cin >> length;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    double area = length * width;
    double perimeter = 2 * (length + width);
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    return 0;
}