#include<bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int> &nums){
	int n=nums.size();
	// step 1 - sort the array
	vector<int> sorted = nums;
	sort(sorted.begin(),sorted.end());
	
	// step 2 - find the middle index. smaller numbers will go in even positions
	int mid = (n + 1) / 2 - 1;  // pointer for smaller half (goes backwards)
    int end = n - 1;            // pointer for larger half (goes backwards)

	// step 3 - fill odd indices with larger numbers.
	for(int i=1;i<n;i+=2){
		nums[i] = sorted[end--];
	}
	
	// step 4 - fill even indices with smaller numbers
	for(int i=0;i<n;i+=2){
		nums[i] = sorted[mid--];
	}
}
int main(){
	vector<int>a{1,5,1,1,6,4};
	wiggleSort(a);
	for(auto it:a) cout<<it<<" ";
	return 0;
}