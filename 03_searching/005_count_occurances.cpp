#include<iostream>
using namespace std;
int FO(int a[], int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>x) high=mid-1;
        else if(a[mid]<x) low=mid+1;
        else{
            if(mid==0 || a[mid-1]!=a[mid]) return mid;
            else high=mid-1;
        }
    }
}
int LO(int a[], int n, int x){
    int low=0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>x)high=mid-1;
        else if(a[mid]<x) low=mid+1;
        else{
            if(mid==n-1 || a[mid+1]!=a[mid]) return mid;
            else low=mid+1;
        }
    }
}
int occurances(int arr[], int n, int x){
    int first = FO(arr,n,x);
    int last = LO(arr,n,x);
    return last-first+1;
}
int main(){
    int arr[]={10,20,20,20,30,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int ans = occurances(arr,n,x);
    cout<<ans;
    return 0;
}