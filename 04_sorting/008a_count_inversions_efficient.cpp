// count inversions efficient algorithm

#include<bits/stdc++.h>
using namespace std;

int merge(int a[], int low, int mid, int high){
    int left = low, right = mid+1;
    vector<int>temp;
    int cnt = 0;
    while(left<= mid && right<= high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
            cnt +=(mid-left+1);
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]= temp[i-low];
    }
    return cnt;
}
int mS(int arr[], int low, int high){
	int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low+high)/2;
    cnt += mS(arr,low,mid);
    cnt += mS(arr,mid+1,high);
    cnt += merge(arr,low,mid,high);
    return cnt;
}
int mergeSort(int arr[], int n){
    return mS(arr,0,n-1);
}
int main(){
    int arr[]={5,1,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int ans  = mergeSort(arr,n);
    cout<<ans;
    return 0;
}