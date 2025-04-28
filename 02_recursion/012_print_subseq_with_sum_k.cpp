#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &curr, vector<int> &vec, int sum){
    if(ind==vec.size() && sum==0){
        for(auto it:curr) cout<<it<<" ";
        cout<<endl;
        return;
    }
    curr.push_back(vec[ind]);
    fun(ind+1,curr,vec,sum-vec[ind]);
    curr.pop_back();
    fun(ind+1,curr,vec,sum);
}
void F(vector<int> &vec, int k){
    vector<int> &curr;
    fun(0,curr,vec,k);
}
int main(){
    vector<int>vec={1,2,1};
    int k;
    cin>>k;
    F(vec,k);
    return 0;
}