#include<bits/stdc++.h>
using namespace std;
int Binary(int a[], int low, int high, int x)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(a[mid]==x) return mid;
    else if(a[mid]>x) return Binary(a,low,high-1,x);
    else return Binary(a,mid+1,high,x);
}
int BS(int arr[], int n ,int x){
    return Binary(arr,0,n-1,x);
}
int main(){
    int arr[]={1,2,45,6,7,32,12,43,48};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int ans = BS(arr,n,x);
    cout<<ans<<endl;
    return 0;
}