#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int fun(string &s){
    int n=s.length();
    unordered_set<int>h;
    for(int i=0;i<n;i++) h.insert(s[i]);
    if(h.size()==n) return n;
    else return -1e8;
}
int longest(string &str){
    int n = str.length();
    int maxi = -1e8;
    for(int i=0;i<n;i++){
        string s="";
        for(int j=i;j<n;j++){
            s = s+ str[j];
            maxi = max(maxi,fun(s));
        }
    }
    return maxi;
}
int main(){
    string Str ="abcabcbb";
    cout<< longest(Str);
    return 0;
}