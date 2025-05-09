#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n) {
    // Step 1: Find maximum value
    int maxi = *max_element(arr, arr + n);

    // Step 2: Frequency array
    int freq[maxi + 1] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Step 3: Convert freq to cumulative freq
    for (int i = 1; i <= maxi; i++) {
        freq[i] += freq[i - 1];
    }

    // Step 4: Build output array (stable sort)
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        freq[arr[i]]--;
        ans[freq[arr[i]]] = arr[i];
    }

    // Step 5: Copy sorted data back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

int main() {
    int arr[] = {5, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    countSort(arr, n);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}