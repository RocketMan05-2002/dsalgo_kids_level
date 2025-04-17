#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    // selecting the minimum element from the right side and swapping it with the current one.
    // this process when iteratively done from start to end, will give a sorted array
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    selectionSort(arr, n);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}