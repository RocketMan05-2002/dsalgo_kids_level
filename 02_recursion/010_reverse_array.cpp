#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high){
	if(low>=high) return;
	swap(arr[low],arr[high]);
	reverse(arr,low+1,high-1);
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	reverse(arr,0,n-1);
	for(auto it:arr) cout<<it<<" ";
}