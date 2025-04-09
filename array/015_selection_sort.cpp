#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    // logic here
}
int main(){
    int arr[]={45,32,1,7,112,432,24,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    selectionSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}