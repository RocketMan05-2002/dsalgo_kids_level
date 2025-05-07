#include <iostream>
using namespace std;

void min_heapify(int arr[], int n, int i)
{
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int smallest;

    if (L < n && arr[L] < arr[i])
    {
        smallest = L;
    }
    else
    {
        smallest = i;
    }

    if (R < n && arr[R] < arr[smallest])
    {
        smallest = R;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}

// Extract minimum element from the heap
int extract_min(int arr[], int &n)
{
    if (n < 1)
    {
        cout << "Heap underflow" << endl;
        return -1;
    }

    int mini = arr[0];      // minimum element
    arr[0] = arr[n - 1];    // move last to root
    n = n - 1;              // reduce size
    min_heapify(arr, n, 0); // heapify root
    return mini;
}

int main()
{
    // Min-heap array
    int arr[] = {5, 10, 20, 30, 15, 50, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Min-Heap:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int min_value = extract_min(arr, n);

    cout << "\nExtracted Minimum: " << min_value << endl;

    cout << "\nHeap after extract_min:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}