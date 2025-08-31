#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false; // Initialize boolean variables

    // Logical AND: true && false → false (0)
    bool andOp = a && b;
    cout << "Logical AND (a && b): " << andOp << endl;

    // Logical OR: true || false → true (1)
    bool orOp = a || b;
    cout << "Logical OR (a || b): " << orOp << endl;

    // Logical NOT: !true → false (0)
    bool notA = !a;
    cout << "Logical NOT (!a): " << notA << endl;

    // Logical NOT: !false → true (1)
    bool notB = !b;
    cout << "Logical NOT (!b): " << notB << endl;

    return 0;
}
