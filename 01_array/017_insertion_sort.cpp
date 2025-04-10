#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[]={5,1,4,3,2};
    int n=5;
    cout<<"before sorting..."<<endl;
    cout<<endl;
    for(auto it:arr) cout<<it<<" ";
    insertionSort(arr,n);
    cout<<"after sorting..."<<endl;
    for(auto it:arr) cout<<it<<" ";
    return 0;
}