#include <iostream>
using namespace std;

//Reverse a Number & If reversing n causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0
int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int ans=0;
    while(n!=0){
        int digit = n%10;
        if((ans > 2147483647/10) || (ans < -2147483648/10)){
            return 0;
        }
        ans = ans * 10 + digit;
        n=n/10;
    }
    cout << ans<<endl;
}
