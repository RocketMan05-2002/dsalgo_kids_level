int peakElement(vector<int> &arr) {
    // Your code here
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
    }
    return -1;
}

// for counting the number of peak elements.
#include<iostream>
#include<vector>
using namespace std;
int peakCount(vector<int> &arr){
	int count;
	int n=arr.size();
	if(n==1) count++;
	if(arr[0]>arr[1])count++;
	if(arr[n-1]>arr[n-2]) count++;
	for(int i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) count++;
	}
	return count;
}
int main(){
	vector<int>nums{1,2,4,5,7,8,3};
	int count = peakCount(nums);
	cout<<count;
	return 0;
}