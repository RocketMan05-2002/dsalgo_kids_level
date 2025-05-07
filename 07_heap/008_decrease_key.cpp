#include<iostream>
using namespace std;
void max_heapify(int arr[], int n, int i){
    int L = 2*i+1;
    int R = 2*i+2;
    int largest;
    if(L<n &&arr[L]>arr[i]){
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
void decrease_key(int arr[], int n, int i, int key){
    if(arr[i]<key){
        cout<<"wrong operation";
        return;
    }
    arr[i]=key;
    max_heapify(arr,n,i);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int key =0;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    decrease_key(arr,n,i,key);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}