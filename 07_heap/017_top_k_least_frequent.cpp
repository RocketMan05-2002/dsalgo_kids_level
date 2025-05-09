#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> topKLeastFreq(vector<int> &nums, int k){
    typedef pair<int,int> P;
    // step 1. map of frequencies
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }

    // step 2. define max heap
    priority_queue<P, vector<P>> pq;

    // step 3. put elements in max heap and dont let size go beyond k
    for(auto &it:mp){
        int value = it.first;
        int freq = it.second;
        pq.push({freq,value}); //max heap will reorder itself using freq the first of pair.
        if(pq.size()>k){
            pq.pop();
        }
    }

    // step 4. result
    vector<int>result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}
int main(){
    vector<int> nums{1,2,3,1,2,1};
    int k;
    cin>>k;
    vector<int> ans = topKLeastFreq(nums,k);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}