// O(n) linear search
#include <iostream>
using namespace std;

int searchfun ( int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]== x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } // taking input in the array.
    int x;
    cin >> x;
    int index = searchfun(arr,n,x);
    cout << index << endl;
    return 0;
}


//O(log n) - Binary search algorithm

#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x){
	sort(arr,arr+n);
	int i=0,j=n-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]<x) i=mid+1;
		else if(arr[mid]>x) j=mid-1;
		else return mid;;
	}
	return -1;
}
int main(){
	int arr[]={12,4,3,5,6,72,421};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int ind = search(arr,n,x);
	cout<<ind<<endl;
	return 0;
}