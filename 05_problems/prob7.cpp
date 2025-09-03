// Palindrome
#include <iostream>
using namespace std;

int main(){
    int i , orig , rev =0 ;
    cout<< "Enter the Number : " ;
    cin >>i;
    orig = i;
    while(i>0){
        rev = rev * 10 + i %10;
        i = i / 10 ;
    }
    if(orig == rev){
        cout << "It is a Palindrome";
    }
    else{
        cout <<"Not a Palidrome";
    }
}
