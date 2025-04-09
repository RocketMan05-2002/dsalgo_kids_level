#include<iostream>
using namespace std;
void leftbyD(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++) temp[i]=arr[i];
    for(int i=d;i<n;i++) arr[i-d]=arr[i];
    for(int i=n-d;i<n;i++)arr[i]=temp[i-(n-d)];
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    leftbyD(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// naive solution vvv
/*
#include<iostream>
using namespace std;
void leftby1(int arr[], int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
void leftbyd(int arr[],int n,int d){
	for(int i=0;i<d;i++){
		leftby1(arr,n);
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d=3;
	leftbyd(arr,n,d);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
*/