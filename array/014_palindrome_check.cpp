#include<iostream>
using namespace std;
bool isPal(int arr[], int n){
    int low=0,high=n-1;
    bool flag = true;
    while(low<high){
        if(arr[low]!=arr[high]){
            flag = !flag;
            break;
        }
        low++;
        high--;
    }
    return flag;
}
int main(){
    int arr[]={1,2,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isPal(arr,n)) cout<<"yes";
    else cout<<"no";
}