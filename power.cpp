#include <iostream>
using namespace std;
int main(){
    int x,n = 0;
    cin >> x >> n;
    int ans = 1;
    for (int i = 0; i < n; i++){
        ans = ans*x;
        
    }
    cout << ans << endl;
}