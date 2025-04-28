// divide and merge algorithm

#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    int left = low, right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mS(int arr[], int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void mergeSort(int arr[], int n){
    mS(arr,0,n-1);
}
int main(){
    int arr[]={5,1,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}