// partition and place in correct place.
// use any of naive, lomuto or hoare's partition

#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void qS(int arr[], int low, int high){
    if(low<high){
        int p = partition(arr,low,high);
        qS(arr,low,p-1);
        qS(arr,p+1,high);
    }
}
void quickSort(int arr[], int n){
    qS(arr,0,n-1);
}
int main(){
    int arr[]={5,1,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}