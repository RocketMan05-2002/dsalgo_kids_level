#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
	for(int i=n-1;i>=1;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int arr[]={12,3,4,20,1,34,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"before sorting..."<<endl;
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	bubbleSort(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}