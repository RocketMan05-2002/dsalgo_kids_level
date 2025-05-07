#include<iostream>
using namespace std;
void max_heapify(int arr[],int n, int i){
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
        swap(arr[largest],arr[i]);
        max_heapify(arr,n,largest);
    }
}
int heap_pop(int arr[], int n){
    if(n<1){
        cout<<"heap underflow";
        return -1;
    }
    int maxi = arr[0] ; //take out max
    arr[0] = arr[n-1] ; //last to root
    n = n-1; // decrease size of heap by 1
    max_heapify(arr,n,0);
    return maxi;
}
int main(){
    int arr[]={9,8,7,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int  maxval = heap_pop(arr,n);
    for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}