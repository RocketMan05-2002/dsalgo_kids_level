#include<iostream>
using namespace std;
int FO(int a[], int n, int x){} // refer to last pages for FO function code
int occs(int a[], int n){
    int first = FO(a,n,1);
    return n-first; // (n-1)-first+1 
}
int main(){
    int arr[]={0,0,0,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = occs(arr,n);
    cout<<ans;
    return 0;
}

// efficient solution

#include<iostream>
using namespace std;

// efficient solution

int occs(int a[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==0) low=mid+1;
        else{
            if(mid==0 || a[mid-1]!=a[mid]) return n-mid; // n-1-mid+1;
            else high = mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[]={1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = occs(arr,n);
    cout<<ans;
    return 0;
}

