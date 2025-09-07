#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3; // Initialize variables

    // In Bitwise Operator we simply add the binary of the given variable using AND , OR , XOR , NOT like for in case of AND it is adding  "2 + 3 => 10 + 11 = 10 =>2"

    // Bitwise AND: 0010 & 0011 = 0010 (decimal 2)
    int andOp = a & b;
    cout << "And operator: " << andOp << endl;

    // Bitwise OR: 0010 | 0011 = 0011 (decimal 3)
    int orOp = a | b;
    cout << "Or operator: " << orOp << endl;

    // Bitwise XOR: 0010 ^ 0011 = 0001 (decimal 1)
    int xorOp = a ^ b;
    cout << "XOR operator: " << xorOp << endl;

    // Bitwise NOT: ~0010 = 1111...1101 (decimal -3 in two's complement)
    int notA = ~a;
    cout << "NOT operator on a: " << notA << endl;

    // Left shift: 0010 << 1 = 0100 (decimal 4)
    int leftShift = a << 1;
    cout << "Left shift operator: " << leftShift << endl;

    // Right shift: 0010 >> 1 = 0001 (decimal 1)
    int rightShift = a >> 1;
    cout << "Right shift operator: " << rightShift << endl;
    return 0;
}
