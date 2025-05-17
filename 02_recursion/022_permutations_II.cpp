#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &arr, vector<vector<int>> &ans){
	if(ind == arr.size()){
		ans.push_back(arr);
		return;
	}
	// traverse over the array and swap elements
	for(int i=ind;i<arr.size();i++){
		swap(arr[i],arr[ind]);
		fun(ind+1,arr,ans);
		swap(arr[ind],arr[i]);
	}
}
vector<vector<int>> permute(vector<int> &arr){
	vector<vector<int>> ans;
	fun(0,arr,ans);
	return ans;
}
int main(){
	vector<int> arr{1,2,3};
	vector<vector<int>> ans = permute(arr);
	for(auto it:ans){
		for(auto ele:it){
			cout<<ele<<" ";
		}
		cout<<endl;
	}
}