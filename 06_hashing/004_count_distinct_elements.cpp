#include<iostream>
#include<unordered_set>
using namespace std;
int fun(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                flag = true;
                break;
            }
        }
        if(flag==false) count++;
    }
    return count;
}

//efficient

int fun(int arr[], int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++)s.insert(arr[i]);
    return s.size();
}


int main(){
    int arr[]={15,12,13,12,13,13,18};
    int n = sizeof(arr)/sizeof(arr[0]);

    int distinct = fun(arr,n);
    cout<<distinct;
    return 0;
}