#include<iostream>
using namespace std;
void rightby1(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1-1;i>=1;i++) arr[i+1]=arr[i];
    arr[0] = temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    rightby1(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}