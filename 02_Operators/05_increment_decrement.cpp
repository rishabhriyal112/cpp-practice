#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5 , c=5 , d=5; // Initialize both variables

    // Pre-increment: ++a → increment first, then use the value
    cout << "Pre-increment (++a): " << ++a << "\n";
    cout << "Value of a after pre-increment: " << a << "\n\n";

    // Post-increment: b++ → use the value first, then increment
    cout << "Post-increment (b++): " << b++ << "\n";
    cout << "Value of b after post-increment: " << b << "\n\n";

    // Pre-decrement: --a → decrement first, then use the value
    cout << "Pre-decrement (--c): " << --c << "\n";
    cout << "Value of c after pre-decrement: " << c << "\n\n";

    // Post-decrement: b-- → use the value first, then decrement
    cout << "Post-decrement (d--): " << d-- << "\n";
    cout << "Value of d after post-decrement: " << d << "\n";

    return 0;
}
