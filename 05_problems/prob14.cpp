#include <iostream>
using namespace std;

// 1
// 23
// 456
// 78910

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i =1;
    int count=1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
