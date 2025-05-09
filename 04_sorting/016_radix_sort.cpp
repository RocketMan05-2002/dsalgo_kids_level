// useful when theres a lot of disparity among the array elements
// TC = d. O(n+k), but k is 9 here, the freq array
// Tc = d. O(n)
// also, d won't be that big, like CMONNN BRUH
// so, TC = O(n). VERY EFFICIENT
// SC = O(n). (the ans and freq array we'd use every itereation would be of order n)

#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n, int pos){
    //frequency array
    int freq[10] ={0};
    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }
    //cumulative freq array
    for(int i=1;i<=9;i++){
        freq[i] += freq[i-1];
    }
    //ans array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]]=arr[i];
    }

    //ans -> arr
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
void radixSort(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    for(int pos = 1; maxi/pos>0 ; pos *= 10){
        countSort(arr,n,pos);
    }
}
int main(){
    int arr[]={190,45,75,90,802,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}