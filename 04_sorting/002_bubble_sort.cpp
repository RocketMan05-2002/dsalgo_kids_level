#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    bubbleSort(arr, n);
    for (auto it : arr)
        cout << it << " ";
}