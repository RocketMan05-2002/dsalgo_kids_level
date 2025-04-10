#include<iostream>
using namespace std;
int logarithm(int n){
    if(n==1) return 0;
    return 1+logarithm(n/2);
}
int main(){
    int n;
    cin>>n;
    int ans = logarithm(n);
    cout<<ans;
    return 0;
}