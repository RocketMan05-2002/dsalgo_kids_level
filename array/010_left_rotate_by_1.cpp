#include<iostream>
using namespace std;
void leftby1(int arr[], int n){
	int temp = arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]= temp;
}
int main(){
	int arr[]={1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	leftby1(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}