int majorityElement(vector<int>& arr) {
    // code here
    int n = arr.size();
    unordered_map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }
    for(auto it:mp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;
}