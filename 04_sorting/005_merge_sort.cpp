#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int high)
{
}
void mS(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void mergeSort(int arr[], int n)
{
    mS(arr, 0, n - 1);
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    int n = 5;
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    mergeSort(arr, n);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}