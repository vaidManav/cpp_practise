#include <iostream>
using namespace std;
int main(){
    int basicSalary = 0;
    cin >> basicSalary;
    int hra = int(0.2) % basicSalary;
    int da = int(0.5) % basicSalary;
    int pf = int(0.11) % basicSalary;
    int totalSalary = int(basicSalary+hra+da-pf);
    cout << totalSalary;
}