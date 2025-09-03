#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >>  n;
    int prod = 1;
    int sum = 0;
    for(int i=0;i<=n;i++){
        int mod = n % 10;
        prod =  prod * mod;
        sum = sum + mod;
        n = n /10;
    }
    cout << "Product : " << prod << endl;
    cout << "Sum : "<< sum << endl;
}
