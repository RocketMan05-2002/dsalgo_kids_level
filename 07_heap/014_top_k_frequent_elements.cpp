#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
struct Node{
    int no;
    int freq;
    Node(int a, int b){
        no = a;
        freq = b;
    }
};
int main(){
    int arr = [1,2,3,1,2,1];
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = topkFreq(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}


/*
logic-
build a hashmap to store numbers and their frequencies
now, using the nodes build a max heap
use extract max k times and build out an array off it.
*/