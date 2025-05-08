#include <bits/stdc++.h>
using namespace std;
void max_heapify(int arr[], int n, int i)
{
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int largest;
    if (L < n && arr[L] > arr[i])
        largest = L;
    else
        largest = i;
    if (R < n && arr[R] > arr[largest])
        largest = R;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}
void build_max_heap(int arr[], int n)
{
    for (int i = floor(n / 2) - 1; i >= 0; i--)
    {
        max_heapify(arr, n, i);
    }
}
int heap_pop(int arr[], int &n)
{
    if (n < 1)
    {
        cout << "Heap underflow";
        return -1;
    }
    int maxi = arr[0];
    arr[0] = arr[n - 1];
    n = n - 1;
    max_heapify(arr, n, 0);
    return maxi;
}
int kthLargest(int arr[], int n, int k)
{
    // convert the arr into max heap
    // heap op k times, kth time you gonna get what you need.
    if (k > n)
        k = k % n;
    build_max_heap(arr, n);
    int ans;
    for (int i = 0; i < k; i++)
    {
        ans = heap_pop(arr, n);
    }
    return ans;
}
int main()
{
    int arr[] = {8, 1, 3, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    int ans = kthLargest(arr, n, k);
    cout << ans << endl;
    return 0;
}