#include <iostream>
using namespace std;

int main(){
    char c = 0;
    cin >> c;
    if (c >= 97 && c <= 122){
        cout << -1;
    }else if (c >= 65 && c <= 90){
        cout << 1;
    }else {
        cout << 0;
    }
}