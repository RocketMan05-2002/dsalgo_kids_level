#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,20,20,30,30,40,40};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int ind = FO(arr,n,x);
    cout<<ind;
    return 0;
}