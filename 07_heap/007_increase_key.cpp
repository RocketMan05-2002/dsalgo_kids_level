#include<iostream>
using namespace std;

void increase_key(int arr[], int n, int i, int key){
    if(arr[i] > key){
        cout << "wrong operation";
        return;
    }
    arr[i] = key; // update the key
    while(i > 0 && arr[(i - 1) / 2] < arr[i]){
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3}; // max heap
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 4; // index to increase
    int key = 50;

    cout << "Before increase_key:\n";
    for(auto it : arr) cout << it << " ";
    cout << endl;

    increase_key(arr, n, i, key);

    cout << "After increase_key:\n";
    for(auto it : arr) cout << it << " ";
    cout << endl;

    return 0;
}