#include <iostream>
#include <math.h>
using namespace std;

// Given an integer n, return true if it is a power of two. Otherwise, return false . An integer n is a power of two, if there exists an integer x such that n == 2x.

int main(){
    int n;
    cout<<"Enter the Number  : ";
    cin >> n;
    if(n>0 && (n&(n-1))==0){
        cout<<"It is a Power of 2";
    }
    else{
        cout<<"It is not a Power of 2";
    }
}

/* Explanation :
n > 0
First it ensures n is positive. Powers of two are positive (we exclude 0 and negative numbers). If n <= 0, the whole expression is false.

(n & (n - 1)) == 0
This is the bit-trick. It uses bitwise AND (&) between n and n-1.
Why it works: any positive power of two has exactly one 1 bit in binary. 

Example:
1 -> 0001
2 -> 0010
4 -> 0100
8 -> 1000
Subtracting 1 from such a number flips that single 1 to 0 and sets all less-significant bits to 1. So n and n-1 share no 1 bits, and their & is 0.

Examples
n = 8 (binary 1000) → n-1 = 7 (binary 0111) → 1000 & 0111 = 0000 → true.
n = 12 (binary 1100) → n-1 = 11 (binary 1011) → 1100 & 1011 = 1000 (non-zero) → false.
n = 1 → 1 & 0 = 0 → true.
n = 0 → n > 0 is false → false.
n = -2 → n > 0 is false → false.
*/


/*
//Leetcode solution

1. Best Solution :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

2. Second Solution : 
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

3. class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i = 0; i<=30 ; i++){
            if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2)
            ans = ans *2;
        }
        return false;
    }
};


Third Solution :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0 ; i<=30 ; i++){
            int ans = pow(2,i);
            if(ans == n){
                return true;
            }
        }
        return false;
    }
*/

