#include <iostream>
using namespace std;

// 1111
// 2222
// 3333
// 4444

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout<< endl;
        i++;
    }
}
