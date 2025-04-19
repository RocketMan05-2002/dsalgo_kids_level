// quick sort using Hoare

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
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

void qS(int arr[], int l, int h){
    if(l<h){
        int p = partition(arr,l,h);
        qS(arr,l,p);
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