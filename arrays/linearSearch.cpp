#include <iostream>
using namespace std;
int linearSearch(int arr[],int n, int x){
    for (int i = 0; i < n;i++){
        if(x == arr[i])
        return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<linearSearch(arr,n, 5);
}