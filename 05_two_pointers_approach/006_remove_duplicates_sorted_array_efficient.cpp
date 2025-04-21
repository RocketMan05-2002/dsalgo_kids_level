#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n){
    int s=0;
    for(int e=1;e<n;e++){
        if(arr[e]!=arr[s]){
            s++;
            swap(arr[s],arr[e]);
        }
    }
    return s+1;
}
int main(){
    int arr[]={1,1,2,2,2,3,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int newsize= removeDuplicates(arr,n);
    for(int i=0;i<newsize;i++) cout<<arr[i]<<" ";
    return 0;
}