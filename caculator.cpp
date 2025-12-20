#include <iostream>
using namespace std;

int main() {
    int a, b;
    float d;
    int c;
    char r;

    do {
        cout << "Enter first number = ";
        cin >> a;

        cout << "Enter second number = ";
        cin >> b;

        cout << "1. Subtract\n";
        cout << "2. Multiply\n";
        cout << "3. Add\n";
        cout << "4. Division\n";
        cout << "Choose any one = ";
        cin >> c;

        if (c == 1) {
            d = a - b;
            cout << "Result = " << d << endl;
        }
        else if (c == 2) {
            d = a * b;
            cout << "Result = " << d << endl;
        }
        else if (c == 3) {
            d = a + b;
            cout << "Result = " << d << endl;
        }
        else if (c == 4) {
            d = (float)a / b;
            cout << "Result = " << d << endl;
        }
        else {
            cout << "Invalid command\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> r;

    } while (r == 'y');

    return 0;
}
