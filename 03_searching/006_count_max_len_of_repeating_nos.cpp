#include<bits/stdc++.h>
using namespace std;
int occurances(int a[], int n){
    int i=0,j=0;
    int maxlen =INT_MIN;
    while(j<=n-1){
        int len = 0;
        while(a[i]==a[j]){
            len++;
            j++;
        }
        maxlen = max(maxlen,len);
        i++;
    }
    return maxlen;
}
int main(){
    int arr[]={10,20,20,20,30,30,30,30,40,40,40,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = occurances(arr,n);
    cout<<ans;
    return 0;
}