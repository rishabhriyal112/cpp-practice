#include <iostream>
using namespace std;

//Reversing a Number 

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int rev = 0 ;
    for ( ; n!=0 ; n = n/10){
        int digit = n % 10;
        rev = rev * 10 + digit;
    }
    cout << rev << endl;
}
