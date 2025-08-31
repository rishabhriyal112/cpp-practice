// Find the sum of all the even numbers up to n
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int sum = 0;
    int i = 2;
    while (i <= n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of Even numbers up to " << n << " is: " << sum;
}
