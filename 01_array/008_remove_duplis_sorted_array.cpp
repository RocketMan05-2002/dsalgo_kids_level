#include<bits/stdc++.h>
using namespace std;
int removeduplicates(int arr[], int n){
    int i=0,j=0;
    int maxlen= 1;
    while(j<n){
        if(arr[j]!=arr[i]){
            i++;
            swap(arr[i],arr[j]);
            maxlen++;
        }
        j++;
    }
    return maxlen;
}
int main(){
    int arr[]={1,1,1,2,2,2,3,4,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int newsize = removeduplicates(arr,n);
    for(int i=0;i<newsize;i++) cout<<arr[i]<<" ";
    return 0;
}