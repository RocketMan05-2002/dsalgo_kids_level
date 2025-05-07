#include <iostream>
using namespace std;

void min_heapify(int arr[], int n, int i) {
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int smallest = i;

    if (L < n && arr[L] < arr[smallest]) {
        smallest = L;
    }
    if (R < n && arr[R] < arr[smallest]) {
        smallest = R;
    }

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}

void build_min_heap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        min_heapify(arr, n, i);
    }
}

int main() {
    int arr[] = {30, 15, 50, 10, 5, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    build_min_heap(arr, n);

    cout << "Min-Heap:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}