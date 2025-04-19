// partitioning an array around a pivot

#include<bits/stdc++.h>
using namespace std;
void naive(int arr[], int n){
    int pivot=arr[n-1];
    vector<int>temp;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=pivot) temp.push_back(arr[i]);
    }
    temp.push_back(pivot);
    for(int i=0;i<n-1;i++){
        if(arr[i]>pivot) temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[]={3,8,7,6,12,10,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"before partition"<<endl;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    naive(arr,n);
    cout<<"after partition"<<endl;
    for(auto it:arr) cout<<it<<" ";
    return 0;
}