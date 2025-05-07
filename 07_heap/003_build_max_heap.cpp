#include<bits/stdc++.h>
using namespace std;
void max_heapify(int arr[], int n, int i){
    int L = 2*i+1;
    int R = 2*i+2;
    int largest;

    if(L<n && arr[L]>arr[i]){
        largest = L;
    }else{
        largest = i;
    }
    if(R<n && arr[R]>arr[largest]){
        largest = R;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,n,largest);
    }
}
void build_max_heap(int arr[], int n){
    // bottom up approach. right to left. within the internal nodes
    for(int i=floor(n/2)-1;i>=0;i--){
        max_heapfify(arr,n,i);
    }
}
int main(){
    int arr[] = {3,6,5,0,8,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //from the given array build an array which is gonna represent max-heap
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    build_max_heap(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}