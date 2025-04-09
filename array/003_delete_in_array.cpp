// by index

#include<iostream>
using namespace std;
int deletion(int arr[], int n, int ind){
	if(ind>=n)return n;
	for(int i=ind;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	return n-1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int ind;
	cin>>ind;
	int newsize = deletion(arr,n,ind);
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

// by value

#include<iostream>
using namespace std;
int deletion(int arr[], int n, int val){
	int ind = -1;
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			ind=i;
			break;
		}
	}
	if(ind==-1) return n;
	for(int i=ind;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	return n-1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int val;
	cin>>val;
	int newsize = deletion(arr,n,val);
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}