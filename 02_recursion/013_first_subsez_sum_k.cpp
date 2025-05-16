// flag approach. but are we not doing mant unnecessary renders
#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int>& ds, int sum, vector<int> &arr, vector<int> &ans, bool &flag){
	if(ind == arr.size()){
		if(sum == 0){
			if(flag == true) ans = ds;
			flag = false;
		}
		return;
	}
	//pick
	ds.push_back(arr[ind]);
	fun(ind+1,ds,sum-arr[ind],arr,ans,flag);
	ds.pop_back();
	// not pick
	fun(ind+1,ds,sum,arr,ans,flag);
}
vector<int> firstSubSumK(vector<int> &arr, int k){
	vector<int> ans;
	vector<int> ds;
	bool flag = true;
	fun(0,ds,k,arr,ans,flag);
	return ans;
}
int main(){
	vector<int> arr{1,2,1};
	int k = 2;
	vector<int> ans = firstSubSumK(arr,k);
	for(auto it:ans) cout<<it<<" ";
	
	return 0;
}