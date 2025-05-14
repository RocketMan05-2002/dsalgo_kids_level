#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2
        if (arr[mid] == x)
            return mid;
        if (arr[low] <= arr[mid])
        {
            // left half is sorted check the range
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            // right half is sorted
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 40, 60, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int ind = search(arr, n, x);
    cout << ind;
    return 0;
}