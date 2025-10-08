#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c = 5, e = 20, f = 100;
    float d = 0.1;

    int abtotal;
    int D;
    float Ddtotal;
    float eD;
    float total;



    abtotal = a * b;
    cout << "Multiplication (2 * 3): " << abtotal << endl;

    D = abtotal + c;
    cout << "Addition (" << abtotal << " + 5): " << D << endl;

    Ddtotal = D + d;
    cout << "Addition (" << D << " + 0.1): " << Ddtotal << endl;

    eD = Ddtotal * e;
    cout << "Multiplication (" << Ddtotal << " * 20): " << eD << endl;

    total = eD - f;
    cout << "Subtraction (" << eD << " - 100): " << total << endl;

    cout << "Final Result: " << total << endl;

    return 0;
}
