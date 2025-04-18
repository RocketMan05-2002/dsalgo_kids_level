// finding peak element in an array

#include <bits/stdc++.h>
using namespace std;
vector<int> peaks(int a[], int n)
{
    vector<int> temp;
    if (n == 1)
    {
        temp.push_back(a[0]);
        return temp;
    }
    if (a[0] >= a[1])
        temp.push_back(a[0]);
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] && a[i] > a[i - 1])
            temp.push_back(a[i]);
    }
    if (a[n - 1] >= a[n - 2])
        temp.push_back(a[n - 1]);
    return temp;
}
int main()
{
    int arr[] = {6, 7, 4, 5, 6, 10, 30, 40, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = peaks(arr, n);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}