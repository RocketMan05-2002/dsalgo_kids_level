#include<iostream>
using namespace std;
int occurances(int arr[], int n, int x){
    int j=0;
    int len=0;
    for(int i=0;i<n;i++){
    	if(arr[i]==x){
    		j=i;
    		break;
    	}
    }
    while(j<=n-1 && arr[j]==x){
        len++;
        j++;
    }
    return len;
}
int main(){
    int arr[]={10,20,20,20,30,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int ans = occurances(arr,n,x);
    cout<<ans;
    return 0;
}