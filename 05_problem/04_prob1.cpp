#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"It is not  prime number for " << i << endl;
        }
        else{
            cout<<"It is a prime number for " << i << endl;
        }
        i++;
    }
}
