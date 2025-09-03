#include <iostream>
using namespace std;

// 4444
// 3333
// 2222
// 1111

int main(){
    int n;
    cout << "Enter the Number  : ";
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-i+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}
