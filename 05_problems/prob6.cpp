//Fibonacci : 1 , 1 , 2 , 3 , 5 ,8 ,13 .................. n and its sum
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i =1;
    int first = 0 ,second=1;
    int sum=0;
    cout << "Fibonacci Series : ";
    while(i <=n){
        cout << first << " "; 
        sum = sum + first;
        int next = first + second ;
        first = second;
        second = next ;
        i++;
    }
    cout << "\nSum of Fiboncci Series are : " << sum << endl;
}
