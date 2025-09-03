#include <iostream>
using namespace std;

// Check if a Number is Prime or not

int main(){
    int n;
    cout << "Enter the Number : ";
    cin>>n;
    bool  isPrime = 1;
    for (int i=2 ; i<n ;i++){
        if (n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout << "It is not a Prime Number" << endl;
    }
    else{
        cout << "It is a Prime Number" << endl;
    }
}
