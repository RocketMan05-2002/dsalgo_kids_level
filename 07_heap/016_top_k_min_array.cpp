#include<bits/stdc++.h>
using namespace std;
void min_heapify(int arr[], int n, int i){
    int L = 2*i+1;
    int R = 2*i+2;
    int smallest;
    if(L<n && arr[L]<arr[i]) smallest = L;
    else smallest = i;
    if(R<n && arr[R]<arr[smallest]) smallest = R;
    if(smallest !=i){
        swap(arr[i],arr[smallest]);
        min_heapify(arr,n,smallest);
    }
}
void build_min_heap(int arr[], int n ){
    for(int i = floor(n/2)-1;i>=0;i--){
        min_heapify(arr,n,i);
    }
}
int extract_min(int arr[], int &n){
    int mini = arr[0];
    arr[0] = arr[n-1];
    n = n-1;
    min_heapify(arr,n,0);
    return mini;
}
vector<int> topKmin(int arr[], int n, int k){
    vector<int>temp;
    build_min_heap(arr,n);
    for(int i=0;i<k;i++){
        temp.push_back(extract_min(arr,n));
    }
    return temp;
}
int main(){
    int arr[]={8,5,6,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    vector<int> ans = topKmin(arr,n,k);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}