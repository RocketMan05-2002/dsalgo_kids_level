//top k largest elements in array.
#include<bits/stdc++.h>
using namespace std;
void max_heapify(int arr[], int n, int i){
	int L = 2*i+1;
	int R = 2*i+2;
	int largest;
	if(L<n && arr[L]>arr[i]) largest = L;
	else largest = i;
	if(R<n && arr[R]>arr[largest]) largest = R;
	if(largest !=i){
		swap(arr[i],arr[largest]);
		max_heapify(arr,n,largest);
	}
}
void build_max_heap(int arr[], int n){
	for(int i=floor(n/2)-1;i>=0;i--){
		max_heapify(arr,n,i);
	}
}
int heap_pop(int arr[], int &n){
	// if(n<1){
	// 	cout<<"heap underflow";
	// 	return -1;
	// }
	//above condition would never arise as we have been told k would never increase n.
	int maxi = arr[0];
	arr[0]=arr[n-1];
	n = n-1;
	max_heapify(arr,n,0);
	return maxi;
}
vector<int> topK(int arr[], int n, int k){
	// build max heap.
	// pop and append at vector
	vector<int> temp;
	build_max_heap(arr,n);
	for(int i=0;i<k;i++){
		temp.push_back(heap_pop(arr,n));
	}
	return temp;
}
int main(){
	int arr[]={8,4,6,2,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k =2;
	vector<int> ans = topK(arr,n,k);
	for(auto it:ans) cout<<it<<" ";
	return 0;
}