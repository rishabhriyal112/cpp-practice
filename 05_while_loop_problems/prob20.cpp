#include <iostream>
using namespace std;

// A 
// B C
// D E F
// G H I J

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin >>n;
    int i =1;
    int start = 'A';
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = start;
            cout << ch << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}
