#include<iostream>
using namespace std;
int largest(int arr[], int n){
    int maxi  = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi) maxi=arr[i];
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = largest(arr,n);
    cout<<ans;
    return 0;
}

// issue - what is they had signs and we were told to do magnitude only comparison