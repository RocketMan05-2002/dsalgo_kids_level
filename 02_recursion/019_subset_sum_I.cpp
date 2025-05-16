#include <bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &ds, int sum, vector<int> &arr, vector<int> &ans){
	if(ind==arr.size()){
		ans.push_back(sum);
		return;
	}
	//pick
	ds.push_back(arr[ind]);
	fun(ind+1,ds,sum+arr[ind],arr,ans);
	ds.pop_back();
	//not pick
	fun(ind+1,ds,sum,arr,ans);
}
vector<int> funs(vector<int> &arr){
	vector<int>ans;
	vector<int>ds;
	fun(0,ds,0,arr,ans);
	sort(ans.begin(),ans.end());
	return ans;
}
int main() {
	// your code goes here
	vector<int> arr{3,1,2};
	vector<int> ans = funs(arr);
	for(auto it:ans) cout<<it<<" ";
	return 0;
}