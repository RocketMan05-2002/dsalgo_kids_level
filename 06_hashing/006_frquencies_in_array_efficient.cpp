#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void frequencies(vector<int> &vec){
    unordered_map<int,int>m;
    for(int i=0;i<vec.size();i++){
        m[vec[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
}
int main(){
    vector<int>vec = {10,12,10,15,10,20,12,12};
    frequencies(vec);
    return 0;
}