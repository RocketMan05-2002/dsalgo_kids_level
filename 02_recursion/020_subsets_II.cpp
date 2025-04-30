#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i-1]==arr[i]) continue;
        ds.push_back(arr[i]);
        fun(i+1,ds,arr,ans);
        ds.pop_back();
    }
}
vector<vector<int>> fun(vector<int> &arr){
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    fun(0,ds,arr,ans);
    return ans;
}
int main(){
    vector<int> arr={1,2,2};
    vector<vector<int>> ans = fun(arr);
    for(auto it:ans){
    	for(auto ele:it){
    		cout<<ele<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}