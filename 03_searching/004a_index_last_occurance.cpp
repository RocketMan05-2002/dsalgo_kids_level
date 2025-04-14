#include<iostream>
using namespace std;
int LO(int a[], int n, int x){
	int low=0,high=n-1;
	int last;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]>x)high=mid-1;
		else if(a[mid]<x)low=mid+1;
		else{
			last=mid;
			break;
		}
	}
	while(last<n-1 && a[last+1]==a[last])last++;
	return last;
}
int main(){
	int arr[]={10,20,20,20,30,30,30,40,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int ind = LO(arr,n,x);
	cout<<ind;
	return 0;
}