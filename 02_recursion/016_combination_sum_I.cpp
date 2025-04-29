#include<bits/stdc++.h>
using namespace std;
void fun(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    //pick
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        fun(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    //not pick
    fun(ind+1,target,arr,ans,ds);
}
vector<vector<int>> F(vector<int> &arr, int target){
    vector<int>ds;
    vector<vector<int>> ans;
    fun(0,target,arr,ans,ds);
    return ans;
}
int main(){
    vector<int>vec= {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = F(vec,target);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}