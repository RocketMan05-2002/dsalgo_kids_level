int countSubarrays(vector<int> &arr, int k) {
    // code here
    unordered_map<int,int>prefix;
    int sum =0;
    int count = 0;
    prefix[0]=1;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        if(prefix.find(sum-k)!=prefix.end()){
            // means its present
            count += prefix[sum-k];
        }
        prefix[sum]++;
    }
    return count;
}