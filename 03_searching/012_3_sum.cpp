// can a triplet with given sum be found in given array ?

#include<bits/stdc++.h>
using namespace std;

bool threesum(int arr[], int n, int x){
    if(n<3) return; // need at least 3 numbers for triplet
    sort(arr,arr+n); // sorting the array
    for(int i=0;i<n-2;i++){
        if(twosum(arr,i+1,n-1,sum-arr[i])){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 32;
    bool istrue = threesum(arr, n, x);
    if (istrue) {
        cout << "yes";
    } else {
        cout << "no";
    }
}