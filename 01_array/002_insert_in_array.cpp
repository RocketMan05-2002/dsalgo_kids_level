#include<iostream>
using namespace std;
int insertion(int arr[], int n, int x, int pos, int cap){
	if(n==cap) return n;
	int index = pos-1;
	for(int i=n-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=x;
	return n+1;
}
int main(){
	int arr[5];
	arr[0]=5;
	arr[1]=10;
	arr[2]=20;
	int n=3;
	int x;
	cin>>x;
	int pos;
	cin>>pos;
	int newsize = insertion(arr,n,x,pos,5);
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}