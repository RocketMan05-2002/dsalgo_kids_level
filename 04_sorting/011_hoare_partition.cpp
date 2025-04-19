// partitioning form to partition an array around a pivot

#include<bits/stdc++.h>
int hoare(int arr[], int l, int h){
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}
using namespace std;
int main(){
    int arr[]={5,3,8,4,2,7,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int ind = hoare(arr,0,n-1);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl<<ind;
    return;
}