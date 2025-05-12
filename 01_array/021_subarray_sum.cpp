/*
Brute force -> calculate all sums and when it becomes equal to target,
return the temp array of i+1,j+1, as the question is of 1 based indexing
*/
// efficient - 
vector<int> subarraySum(vector<int> &arr, int target) {
    // code here
    int start = 0;
    int curSum = 0;
    for(int end=0;end<arr.size();end++){
        curSum +=arr[end];
        while(curSum > target && start<end){
            curSum -= arr[start];
            start++;
        }
        if(curSum == target){
            return {start+1,end+1};
        }
    }
    return {-1};
}