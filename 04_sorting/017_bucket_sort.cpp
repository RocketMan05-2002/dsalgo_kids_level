#include<bits/stdc++.h>
using namespace std;
void bucketSort(float arr[], int n){
    //buckets of size n
    // vector<vector<float>> is a better choice coz we do not know the amount of elements that wuld go in one bucket
    // step 1. create buckets
    vector<vector<float>> bucket(n,vector<float>());

    // step 2. divide elements into buckets
    for(int i=0;i<n;i++){
        int index = arr[i]*n ; // as index datatype is int, by default floor value hi lega
        bucket[index].push_back(arr[i]);
    }

    //step 3. sort individual buckets
    for(int i=0;i<n;i++){
        if(bucket[i].empty()) continue;
        sort(bucket[i].begin(),bucket[i].end());
    }

    //step 4. combining elements from buckets
    int index= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[index] = bucket[i][j];
            index++;
        }
    }
}
int main(){
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}