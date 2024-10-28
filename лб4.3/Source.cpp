#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, X_start, X_end, dX;
    cout << "a= ";
    cin >> a;
    cout << " b= ";
    cin >> b;
    cout << " c= ";
    cin >> c;
    cout << " X1= ";
    cin >> X_start;
    cout << " X2= ";
    cin >> X_end;
    cout << " dX= ";
    cin >> dX;
    cout << "\n----------------------------------\n";
    cout << "|   X   |           F            |\n";
    cout << "----------------------------------\n";
    for (double x = X_start; x <= X_end; x += dX) {
        double F;
        if (x < 0 && b != 0) {
            F = a * pow(x, 2) - b * pow(x, 2);
        }
        else if (x > 0 && b == 0) {
            F = x / (x - a);
        }
        else if (x < 0 && c != 0) {
            F = x / (x - c);
        }
        else if (x == 0 && b == 0) {
            F = x + 5;
        }
        else {
            F = c / (x - 10);
        }
        cout << "| " << setw(5) << x << " | " << setw(20) << F << " |\n";
    }

    cout << "----------------------------------\n";
    return 0;
}