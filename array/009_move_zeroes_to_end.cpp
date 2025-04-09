
//efficient solution
#include<iostream>
using namespace std;
void movezeroes(int arr[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
int main(){
	int arr[]={8,5,0,10,0,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	movezeroes(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}


// naive solution - O(n^2)

#include<iostream>
using namespace std;
void movezeroes(int arr[], int n){
	for(int i =0;i<n;i++){
		if(arr[i]==0){
			for(int j=i+1;j<n;j++){
				if(arr[j]!=0){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
}
int main(){
	int arr[]={8,5,0,10,0,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	movezeroes(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}