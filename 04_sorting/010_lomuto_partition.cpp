// paritioning an array around its pivot.

#include<bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int low, int high){
    int pivot = arr[high];
    int i= low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
int main(){
    int arr[]={3,8,7,6,12,10,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"before partition"<<endl;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int partition = lomuto(arr,0,n-1);
    cout<<"after partition"<<endl;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    cout<<partition;
    return 0;
}