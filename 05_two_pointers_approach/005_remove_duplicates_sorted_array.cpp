#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int removeDuplicates(int arr[], int n){
    unordered_set<int>h;
    for(int i=0;i<n;i++) h.insert(arr[i]);
    vector<int>temp;
    for(int i=0;i<n;i++){
    	if(i>0 && arr[i-1]==arr[i]) continue;
        if(h.find(arr[i])!=h.end()) temp.push_back(arr[i]);
    }
    for(int i=0;i<h.size();i++) arr[i]=temp[i];
    return h.size();
}

int main(){
    int arr[]={1,2,2,2,3,3,4,4,4,5,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newsize = removeDuplicates(arr,n);
    for(int i=0;i<newsize;i++) cout<<arr[i]<<" ";
    return 0;
}