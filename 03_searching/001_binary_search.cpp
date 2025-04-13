#include <bits/stdc++.h>
using namespace std;
int BS(int a[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] < x)
            l = mid + 1;
        else if (a[mid] > x)
            h = mid - 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 45, 6, 7, 32, 12, 43, 48};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int ans = BS(arr, n, x);
    cout << ans << endl;
    return 0;
}