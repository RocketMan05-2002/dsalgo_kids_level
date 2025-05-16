// print all subsequences with sum k
#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &ds, int sum, vector<int> &arr, vector<vector<int>> &ans){
	if(ind==arr.size()){
		if(sum==0){
			ans.push_back(ds);
		}
		return;
	}
	//pick
	ds.push_back(arr[ind]);
	fun(ind+1,ds,sum-arr[ind],arr,ans);
	ds.pop_back();
	//not pick
	fun(ind+1,ds,sum,arr,ans);
}
vector<vector<int>> subsKsum(vector<int> &arr, int k){
	vector<vector<int>> ans;
	vector<int> ds;
	fun(0,ds,k,arr,ans);
	return ans;
}
int main(){
	vector<int>arr{1,2,1};
	int k;
	cin>>k;
	vector<vector<int>> ans = subsKsum(arr,k);
	for(auto it:ans){
		for(auto ele:it){
			cout<<ele<<" ";
		}
		cout<<endl;
	}
	return 0;
}