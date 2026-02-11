#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char option, op;
    cout << "\t\t+--------------------------------------------------------------------------------------+" << endl;
    cout << "\t\t|                                                                                      |" << endl;
    cout << "\t\t|   ██████   █████  ██      ██████  ██    ██ ██       █████  ████████  ██████  ██████  |" << endl;
    cout << "\t\t|  ██       ██   ██ ██     ██       ██    ██ ██      ██   ██    ██    ██    ██ ██   ██ |" << endl;
    cout << "\t\t|  ██       ███████ ██     ██       ██    ██ ██      ███████    ██    ██    ██ ██████  |" << endl;
    cout << "\t\t|  ██       ██   ██ ██     ██       ██    ██ ██      ██   ██    ██    ██    ██ ██   ██ |" << endl;
    cout << "\t\t|   ██████  ██   ██ ██████  ██████   ██████  ███████ ██   ██    ██     ██████  ██   ██ |" << endl;
    cout << "\t\t|                                                                                      |" << endl;
    cout << "\t\t|--------------------------------------------------------------------------------------|" << endl;
    cout << "\t\t|                                   *Michael Cantu*                                    |" << endl;
    cout << "\t\t+--------------------------------------------------------------------------------------+" << endl;
    cout << "\t\t   _____          _      _____ _    _ _            _______ ____  _____" << endl;  
    cout << "\t\t /  ____|   /\   | |    / ____| |  | | |        /\|__   __/ __ \|  __ \ " << endl; 
    cout << "\t\t | |       /  \  | |   | |    | |  | | |       /  \  | | | |  | | |__) | " << endl;
    cout << "\t\t | |      / /\ \ | |   | |    | |  | | |      / /\ \ | | | |  | |  _  / " << endl;
    cout << "\t\t | |____ / ____ \| |___| |____| |__| | |____ / ____ \| | | |__| | | \ \ " << endl;
    cout << "\t\t \_____/_/    \_\______\_____|\____/|______/_/    \_\_|  \____/|_|  \_\ " << endl;
                                                                        

    cout << "Basic Calculator [a]\nAdvanced Calculator [b]\nGraphing Calculator [c]\n";
    cin >> option;
    if (option == 'a' || option == 'A') { // basic calc
        double x, y, z = 0;
        cout << "Enter your first number: ";
        cin >> x;
        cout << "Enter your operation: ";
        cin >> op;
        cout << "Enter your second number: ";
        cin >> y;
        if (op == '+') {
            z += x + y;
        }
        else if (op == '-') {
            z += x - y;
        }
        else if (op == '*') {
            z += x * y;
        }
        else if (op == '/') {
            if (y == 0) {
                "Error\n";
                return 1;
            }
            z += x / y;
        }
        cout << x << op << y << "=" << z << endl;
        }
    if (option == 'b' || option == 'B') { // advanced calc
        double x, y, z = 1;
        cout << "Square root [a]\n";
        cout << "nth root [b]\n";
        cout << "Power square [c]\n";
        cout << "nth power [d]\n";
        cin >> option;
        if (option == 'a') { // square root (z^2=x)
            cout << "Enter the number you want to root : ";
            cin >> x;
            if (x < 0) {
                cout << "Error\n";
                return 1;
            }
            z = sqrt(x);
            cout << "Result: " << z << endl;
        }
        else if (option == 'b') { // nth root (z^y=x)
            cout << "Enter the number you want to root : ";
            cin >> x;
            if (x < 0) {
                cout << "Error\n";
                return 1;
            }
            cout << "Enter the number you want to root by : ";
            cin >> y;
            z = pow(x, 1.0 / y);
            cout << "Result: " << z << endl;
        }
        else if (option == 'c') { //square
            cout << "Enter the number you want to square : ";
            cin >> x;
            z = x * x;
            cout << "Result: " << z << endl;
        }
        else if (option == 'd') { //power nth  (x^y)
            cout << "Enter the number you want to power : ";
            cin >> x;
            cout << "Enter the exponent : ";
            cin >> y;
            z = pow(x, y);
            cout << "Result: " << z << endl;
        }
    }
    if (option == 'c' || option == 'C') {
        const int w = 80;
        const int h = 25;
        const double minX = -10, maxX = 10;
        const double minY = -10, maxY = 10;
        char func;
        cout << "Choose your function\n";
        cout << "y = mx + b [1]\n";
        cout << "y = ax^2 + bx + c [2]\n";
        cout << "y = sin(x) [3]\n";
        cin >> func;
        double m, b, a, c;
        if (func == '1') { //slope line
        cout << "Type your slope value: ";
        cin >> m;
        cout << "Type your y-intercept: ";
        cin >> b;
        }
        else if (func == '2') { //porabola
        cout << "Type your a value: ";
        cin >> a;
        cout << "Type your b value: ";
        cin >> b;
        cout << "Type your c value: ";
        cin >> c;
        }
        else if (func == '3') { // sin x (this took me forever to figure out)
        cout << "Type your vertical shift: ";
        cin >> b;
        }
        for (int row = 0; row < h; row++) {
            for (int col = 0; col < w; col++) {
                double x = minX + (maxX - minX) * col / w;
                double y;
                if (func == '1') { //slope line
                    y = (m * x) + b;
                }
                else if (func == '2') { //porabolaaaa
                    y = (a * (x * x)) + (b * x) + c;
                }
                else if (func == '3') { // sin x
                    y = sin(x) + b;
                }
                int graphRow = (int)((maxY - y) / (maxY - minY) * h);
                
                if (graphRow == row) {
                    cout << "x";
                }
                else if (col == w / 2) {
                    cout << "|";
                }
                else if (row == h / 2) {
                    cout << "-";
                }
                else {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    else {
        cout << "Error\n";
        return 1;
    }
    return 0;

}