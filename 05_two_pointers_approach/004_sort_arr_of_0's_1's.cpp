#include<iostream>
using namespace std;
void fun(int arr[], int n){
    int ans[n];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[index]=0;
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            arr[index]=1;
            index++;
        }
    }
    for(int i=0;i<n;i++) arr[i]=ans[i];
}

//efficent function (solution)
void fun(int arr[], int n){
	int s=0,e=0;
	while(e<n){
		if(arr[e]==0){
			swap(arr[s],arr[e]);
			s++;
		}
		e++;
	}
}

int main(){
    int arr[] = {1,0,1,1,0};
    int n=5;
    fun(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}