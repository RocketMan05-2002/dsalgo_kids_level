#include<bits/stdc++.h>
using namespace std;
void min_heapify(int arr[], int n, int i){
    int L = 2*i + 1;
    int R = 2*i + 2;
    int smallest = i;

    if(L < n && arr[L] < arr[smallest]){
        smallest = L;
    }
    if(R < n && arr[R] < arr[smallest]){
        smallest = R;
    }
    if(smallest != i){
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}
int main(){
    int arr[]={10,8,24,9,29,30,32}; // min heap in an array
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0; // min heap error index
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    min_heapify(arr,n,i);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}