#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the value : ";
    cin >> ch;


// 48-57 : 0 to 9   |   65 - 90 : A to Z  |   97 - 122 : a to z 
    int ascii = (int)ch;
    if(ascii >=65 && ascii<=90 ){
        cout <<  ch << " is  a Uppercase Letter ";
    }
    else if(ascii >=97 && ascii <=122){
        cout << ch <<" is a Lowecase Letter";
    }

    else if(ascii >=48 && ascii <=57){
        cout << ch <<" is a Digit";
    }

    else{
        cout << ch <<"not a value";
    }
}
