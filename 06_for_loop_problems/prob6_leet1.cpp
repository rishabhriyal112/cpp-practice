#include <iostream>
using namespace std;

// Subtract the Product and Sum of Digits of an Integer


int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int prod = 1;
    int sum = 0;
    while (n != 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int ans = prod - sum ;
    cout << "Answer  is : " << ans ;
}
