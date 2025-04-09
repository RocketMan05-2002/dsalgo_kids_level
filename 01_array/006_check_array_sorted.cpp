#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = !flag;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(isSorted(arr,n)) cout<<"yes";
    else cout<<"no";
    return 0;
}