#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> topKFreq(vector<int> &nums, int k){
    
    typedef pair<int,int> P;

    // step 1: frquencies map
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }

    // step 2: define min heap
    priority_queue<P,vector<P>,greater<P>> pq; // min heap

    // step 3: push elements in min heap and maintain the size of k only
    for(auto &it:mp){
        int value = it.first;
        int freq = it.second;

        pq.push({freq,value}); // since min heap would reorder according to the first of pair

        if(pq.size()>k){
            pq.pop();
        }
    }

    // step 4: result
    vector<int> result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}
int main(){
    vector<int>nums {1,2,3,1,2,1};
    int k;
    cin>>k;
    vector<int> ans = topKFreq(nums,k);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}