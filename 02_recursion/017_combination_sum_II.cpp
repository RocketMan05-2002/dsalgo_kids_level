#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &ds, int target, vector<int> &arr, set<vector<int>> &ans){

    if(ind==arr.size()){
        if(target==0){
            ans.insert(ds);
        }
        return;
    }

    //pick
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        fun(ind+1,ds,target-arr[ind],arr,ans);
        ds.pop_back();
    }
    //not pick
    fun(ind+1,ds,target,arr,ans);
}
vector<vector<int>> combiSum(vector<int>vec, int target){
    set<vector<int>> ans;
    vector<int> ds;
    sort(vec.begin(),vec.end());
    fun(0,ds,target,vec,ans);
    //ans will be ready
    // convert into vector of vectors and return
    vector<vector<int>> res(ans.begin(),ans.end());
    return res;
}
int main(){
    vector<int> vec = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> combos = combiSum(vec,target);
    for(auto list:combos){
        for(auto ele:list){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}