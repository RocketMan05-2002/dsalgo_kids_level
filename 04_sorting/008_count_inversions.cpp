// count inversions in an array

// naive solution

#include<iostream>
using namespace std;
int inversions(int a[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={2,4,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< inversions(arr,n);
    return 0;
}
/*
O/P:
(2,1)
(4,1)
(4,3)
3
*/