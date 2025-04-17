// can we find two numbers in a sorted array with their sum being equal to given target

#include<iostream>
using namespace std;
bool twosum(int a[], int n, int sum){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==sum) return true;
        else if(a[i]+a[j]<sum)i++;
        else j--;
    }
    return false;
}

int main(){
    int arr[]={2,5,8,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x = 17;
    bool istrue = twosum(arr,n,x);
    if(istrue) cout<<"yes";
    else cout<<"no";
    return 0;
}