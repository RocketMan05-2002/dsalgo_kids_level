#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n){
    // step 1: find the maximum element
    int maxi = *max_element(arr,arr+n);

    // step 2: create a frequency array and initialize with 0
    int freq[maxi+1] = {0};

    // step 3: count frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // step 4: Rebuild the sorted array
    int index = 0;
    for(int i=0;i<=maxi;i++){
        while(freq[i]>0){
            arr[index]= i;
            index++;
            freq[i]--;
        }
    }
}
int main(){
    int arr[]={5,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    countSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}