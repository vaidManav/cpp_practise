#include <iostream>
using namespace std;
void arrangeNumbers(int arr[],int n){
    
    
    if (n%2 == 0){
        int num = 1;
        for (int i = 0; i < n/2;i++){
            arr[i] = num;
            num+=2;
        }
    
    int num2 = n;
    for (int i = n/2;i < n;i++){
        arr[i] = num2;
        num2=num2-2;
    }
    }
    else {
        int temp=1;
        for (int i = 0; i < (n+1)/2; i++){
            arr[i] = temp;
            temp+=2;
        }
        int temp2 = n-1;
        for (int i = (n+1)/2;i< n;i++){
            arr[i]=temp2;
            temp2=temp2-2;
        }
    }
}
int main()
{
    int n;
    cin >> n;    
    int arr[n]; 
    arrangeNumbers(arr,n);
    for (int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
}
