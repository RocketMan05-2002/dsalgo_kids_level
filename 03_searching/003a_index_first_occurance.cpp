#include<iostream>
using namespace std;
int FO(int a[], int n, int x){
    int low=0,high=n-1;
    int first;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>x) high=mid-1;
        else if(a[mid]<x) low=mid+1;
        else{
            first=mid;
            break;
        }
    }
    while(first>0 && a[first-1]== a[first]) first--;
    return first;
}
int main(){
    int arr[]={10,20,20,20,30,30,40,40};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int ind = FO(arr,n,x);
    cout<<ind;
    return 0;
}