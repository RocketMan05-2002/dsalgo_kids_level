#include<iostream>
using namespace std;
void heap_insert_element(int arr[], int n, int val){
    n = n+1;
    arr[n-1] = val;
    int i=n-1;
    while(i>0 && arr[(i-1)/2]<arr[i]){
        swap(arr[(i-1)/2],arr[i]);
        i=(i-1)/2;
    }
}
int main(){
    int arr[9];
    for(int i=0;i<8;i++) cin>>arr[i];
    int n = 8;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int val = 12;
    heap_insert_element(arr,n,val);
    for(int i=0;i<n+1;i++) cout<<arr[i]<<" ";
    return 0;
}