// TIME COMPLEXITY - O(n).

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> topKFreq(vector<int> &nums, int k){
    int n = nums.size();
    // map of frequencies
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }

    // bucket[i] -> elements with i frequency
    vector<vector<int>> bucket(n+1); // max freq can be n -> 0 to n indices -> (n+1) size

    for(auto &it:mp){
        int element = it.first;
        int freq = it.second;

        bucket[freq].push_back(element);
    }

    // right to left, to encounter max frequencies first
    vector<int> result;
    for(int i=n;i>=0;i--){
        if(bucket[i].size() == 0)  continue;
        while( bucket[i].size()>0 && k>0){
            result.push_back(bucket[i].back());
            bucket[i].pop_back();
            k--;
        }
    }
    return result;
}
int main(){
    vector<int> nums{1,2,3,1,2,1};
    int k;
    cin>>k;
    vector<int> ans = topKFreq(nums,k);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}