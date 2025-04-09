#include<iostream>
using namespace std;
void rightbyD(int arr[], int n, int d){
    if(d>n)d=d%n;
    int temp[d];
    for(int i=0;i<d;i++) temp[i] = arr[n-d+i];
    for(int i=n-1;i>=d;i--) arr[i]=arr[i-d];
    for(int i=0;i<d;i++) arr[i] = temp[i];
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d; cin>>d;
    rightbyD(arr,n,d);
    for(auto it:arr) cout<<it<<" ";
}