#include <iostream>
using namespace std;

int main() {
    int a = 10; // Initial value

    // Addition assignment: a = a + 5 → 10 + 5 = 15
    a += 5;
    cout << "After a += 5: " << a << endl;

    // Subtraction assignment: a = a - 3 → 15 - 3 = 12
    a -= 3;
    cout << "After a -= 3: " << a << endl;

    // Multiplication assignment: a = a * 2 → 12 * 2 = 24
    a *= 2;
    cout << "After a *= 2: " << a << endl;

    // Division assignment: a = a / 4 → 24 / 4 = 6
    a /= 4;
    cout << "After a /= 4: " << a << endl;

    // Modulus assignment: a = a % 3 → 6 % 3 = 0
    a %= 3;
    cout << "After a %= 3: " << a << endl;

    return 0;
}
