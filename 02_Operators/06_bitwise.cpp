#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3; // Initialize variables

    // Bitwise AND: 0101 & 0011 = 0001 (decimal 1)
    int andOp = a & b;
    cout << "And operator: " << andOp << endl;

    // Bitwise OR: 0101 | 0011 = 0111 (decimal 7)
    int orOp = a | b;
    cout << "Or operator: " << orOp << endl;

    // Bitwise XOR: 0101 ^ 0011 = 0110 (decimal 6)
    int xorOp = a ^ b;
    cout << "XOR operator: " << xorOp << endl;

    // Bitwise NOT: ~0000...0101 = 1111...1010 (decimal -6 in two's complement)
    int notA = ~a;
    cout << "NOT operator on a: " << notA << endl;

    // Left shift: 0101 << 1 = 1010 (decimal 10)
    int leftShift = a << 1;
    cout << "Left shift operator: " << leftShift << endl;

    // Right shift: 0101 >> 1 = 0010 (decimal 2)
    int rightShift = a >> 1;
    cout << "Right shift operator: " << rightShift << endl;

    return 0;
}
