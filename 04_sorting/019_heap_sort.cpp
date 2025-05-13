// heap sort
#include<bits/stdc++.h>
using namespace std;
void max_heapify(vector<int> &arr, int n, int i){
	int L = 2*i+1;
	int R = 2*i+2;
	int largest;
	if(L<n && arr[L]>arr[i])largest = L;
	else largest = i;
	if(R<n && arr[R]>arr[largest]) largest =R;
	if(largest !=i){
		swap(arr[i],arr[largest]);
		max_heapify(arr,n,largest);
	}
}
void build_max_heap(vector<int> &arr){
	int n= arr.size();
	for(int i=floor(n/2)-1;i>=0;i--){
		max_heapify(arr,n,i);
	}
}
void heapSort(vector<int> &arr){
	int n=arr.size();
	build_max_heap(arr);
	for(int i=n-1;i>=0;i--){
		swap(arr[0],arr[i]);
		max_heapify(arr,i,0);
	}
}
int main(){
	vector<int>arr{5,1,4,2,3};
	heapSort(arr);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}