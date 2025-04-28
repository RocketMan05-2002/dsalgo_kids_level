// given length of the rope and the possible cuts a,b,c which can be made on em
// return the maximum cuts that can be made to the rope 
#include<iostream>
using namespace std;

int fun(int n, int x, int y, int z){
    if(n==0) return 0;
    if(n<0) return -1;
    int res = max(max(fun(n-x,x,y,z), fun(n-y,x,y,z)), fun(n-z,x,y,z));
    if(res == -1) return -1;
    return res+1;
}

int cutSegments(int n, int x, int y, int z){
    int ans = fun(n,x,y,z);
    if(ans == -1) return 0;
    else return ans;
}

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int ans = cutSegments(n,a,b,c);
    cout<<ans;
    return 0;
}