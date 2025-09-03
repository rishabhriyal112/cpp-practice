#include <iostream>
using namespace std;

// Sum of n Natural Numbers

int main(){
    int n;
    cout << "Enter the Number : ";
    cin>>n;
    int sum=0;
    for(int i=0 ; i<=n ;i++ ){
        sum = sum + i;
    }
    cout <<"Sum of " << n <<" Natural Numbers are : " << sum << endl;
}
