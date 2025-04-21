#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr){
    int s=0,e=0;
    while(e<arr.size()){
        if(arr[e]!=0){
            swap(arr[s],arr[e]);
            s++;
        }
        e++;
    }
}
int main(){
    vector<int>arr= {8,0,1,0,0,2,3,4,0};
    moveZeroes(arr);
    for(auto it:arr) cout<<it<<' ';
    return 0;
}