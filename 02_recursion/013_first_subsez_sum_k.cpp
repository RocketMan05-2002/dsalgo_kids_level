#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &curr, vector<int> &vec, int sum, bool &flag){
    if(ind==vec.size()){
    	if(sum==0 && flag){
    		for(auto it:curr) cout<<it<<" ";
    		flag = false;
        	cout<<endl;
    	}
        return;
    }
    curr.push_back(vec[ind]);
    fun(ind+1,curr,vec,sum-vec[ind],flag);
    curr.pop_back();
    fun(ind+1,curr,vec,sum,flag);
}
void F(vector<int> &vec, int k){
    vector<int> curr;
    bool flag = true;
    fun(0,curr,vec,k,flag);
}
int main(){
    vector<int>vec={1,2,1};
    int k;
    cin>>k;
    F(vec,k);
    return 0;
}