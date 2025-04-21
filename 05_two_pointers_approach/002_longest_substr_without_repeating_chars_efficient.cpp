#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int longest(string &str){
    int start = 0, end = 0;
    unordered_set<char>h;
    int maxi = -1;
    while(end<str.length()){
        if(h.find(str[end])!=h.end()){
            while(str[start]!=str[end]){
                h.erase(str[start]);
                start++;
            }
            h.erase(str[start]);
            start++;
        }
        h.insert(str[end]);
        maxi = max ( maxi , end-start+1);
        end++;
    }
    return maxi;
}
int main(){
    string Str="abcabcbb";
    cout<< longest(Str);
    return 0;
}