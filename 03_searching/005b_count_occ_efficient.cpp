#include<iostream>
using namespace std;

int occurances(int a[], int n, int x) {
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] > x) high = mid - 1;
        else if (a[mid] < x) low = mid + 1;
        else {
            if (mid == 0 || a[mid - 1] != x) {
                first = mid;
                break;
            } else {
                high = mid - 1;
            }
        }
    }

    if (first == -1) return 0; // Element not found

    // Count occurrences
    int count = 0;
    while (first < n && a[first] == x) {
        count++;
        first++;
    }

    return count;
}

int main() {
    int arr[] = {10, 20, 20, 20, 30, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int ans = occurances(arr, n, x);
    cout << ans;
    return 0;
}