#include <bits/stdc++.h>
using namespace std;

void max_heapify(int arr[], int n, int i) {
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int largest = i;

    if (L < n && arr[L] > arr[largest]) {
        largest = L;
    }

    if (R < n && arr[R] > arr[largest]) {
        largest = R;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {15, 30, 40, 10, 5, 20, 35};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0; // index to apply max_heapify
    max_heapify(arr, n, i); // Pass full size

    cout << "Array after max_heapify at index " << i << ":\n";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}