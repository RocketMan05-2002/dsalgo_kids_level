// Intersection of 2 sorted arrays

#include<iostream>
using namespace std;
void intersection(int a[], int m, int b[], int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
            continue;
        }
        if(j>0 && b[j-1]==b[j]){
            j++;
            continue;
        }
        if(a[i]<b[j])i++;
        else if(a[i]>b[j])j++;
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
int main(){
    int a[]={3,5,10,10,15,15,20};
    int b[]={5,10,10,15,30};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    intersection(a,m,b,n);
    return 0;
}