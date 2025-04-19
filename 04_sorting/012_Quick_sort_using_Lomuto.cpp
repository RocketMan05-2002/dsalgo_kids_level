// quick sort using lomuto

#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void qS(int arr[], int l, int h){
    if(l<h){
        int p = partition(arr,l,h);
        qS(arr,l,p-1);
        qS(arr,p+1,h);
    }
}
int main(){
    int a[]={5,3,8,4,2,7,1,10};
    int n=sizeof(a)/sizeof(a[0]);

    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    qS(a,0,n-1);
    for(auto it:a) cout<<it<<" ";
    return 0;
}