#include <iostream>

using namespace std;

int main(){

    int limit;
    int a = 0;
    int b = 1;
    char again;

    cout << "This is the Fibonacci Sequence mod 10 fact checker." << endl;
    cout << "How many terms do you wish to check? ";
    cin >> limit;

    for (int i = 1; i <= limit; i++){
        int next = a + b;   
        a = b;
        b = next % 10;
        cout << i << ": ";
        cout << a;

        if (a % 2 ==0){
            cout << " - even" << endl;
        }
        if (a % 5 == 0){
            cout << " - divisible by 5" << endl;
        }
        else {
            continue;
            cout << ' ' << endl;
        }
    }
    cout << "Do you wnat to run it again? (Y/N)" << endl;
        cin >> again;
        
        while (again == 'Y'){
        continue;
        }

return 0;
}