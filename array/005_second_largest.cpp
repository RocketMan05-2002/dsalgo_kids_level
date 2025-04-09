// naive solution. O(n)+O(n).

#include<iostream>
using namespace std;
int getLargest(int arr[], int n){
    int maxi = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi) maxi = arr[i];
    }
    return maxi;
}
int seclargest(int arr[], int n){
    int largest = getLargest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++){
        if(arr[i]!=largest){
            if(res == -1 ) res = arr[i];
            else if(arr[i]>res) res = arr[i];
        }
    }
    return res;
}
int main(){
    int arr[]={12,3,4,5,6,45,6,634};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans = seclargest(arr,n);
    cout<<ans;
    return 0;
}

// efficient solution
// O(n)

#include <iostream>
using namespace std;

int fun(int arr[], int n){
    int maxi = arr[0];
    int secmax = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            secmax = maxi;
            maxi= arr[i];
        }else if(arr[i]<maxi){
            if(secmax == -1 || arr[i]>secmax) secmax = arr[i];
        }
    }
    return secmax;
}

int main(){
    int arr[]={12,3,4,5,6,45,6,634};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans = fun(arr,n);
    cout<<ans;
    return 0;
}