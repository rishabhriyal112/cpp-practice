// Factorial : 1 , 1*2 , 1*2*3 .......................... n
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i =1;
    int fact = 1;
    while (i<=n){
        fact = fact * i ;
        i++;
    }
    cout<< "Factorial of " << n << " is : "<< fact;
}
