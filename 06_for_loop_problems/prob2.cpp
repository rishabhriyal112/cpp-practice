#include <iostream>
using namespace std;

// Fibonacci Series

int main(){
    int n;
    cout << "Enter the Number : ";
    cin>>n;
    int a = 0 ,  b =1 , sum=0;
    cout << "Fibonacci Series are : ";
    for (int i=0 ; i<n ; i++){
        cout << a << " ";
        sum = sum + a;
        int curr = a+b;
        a =b;
        b=curr;
    }
    cout << "\nSum of Fibonacci Series are : " << sum << endl;
}
