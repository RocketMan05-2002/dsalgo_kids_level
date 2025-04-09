#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n){
    int low=0,high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    reverse(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}