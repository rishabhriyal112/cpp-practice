#include<iostream>
using namespace std;

int main(){
    // 0 ,1 , 2, 3 ................ n 
    int n;
    cout << "Enter the Number : ";
    cin>>n;

    int i=0;
    int sum=0;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << "Sum of the numbers are  : " << sum;
}
