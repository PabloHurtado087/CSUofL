#include <iostream>
using namespace std;

int main() {
    cout << "Grade mark1: " << endl;
    cin >> grade1;
    cout << "Grade mark2: " << endl;
    cin >> grade2;
    cout << "Grade mark3: " << endl;
    cin >> grade3;
    cout << "Grade mark4: " << endl;
    cin >> grade4;
    cout << "Grade mark5: " << endl;
    cin >> grade5;

    gradeAverage = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

    if (gradeAverage >= 80) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (80 > gradeAverage && gradeAverage >= 70) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (70 > gradeAverage && gradeAverage >= 60) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (60 > gradeAverage && gradeAverage >= 50) {
        cout << "Your letter grade is: D" << endl;
    }
    else {
        cout << "Your letter grade is: F" << endl;
    }
}