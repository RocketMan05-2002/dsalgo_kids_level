#include <bits/stdc++.h>
using namespace std;
float fun(int a[], int n, int b[], int m)
{
    // merge the two sorted arrays and determine the median,
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    while (i < n)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        temp.push_back(b[j]);
        j++;
    }
    // both would be merged at this point
    int len = temp.size();
    if (len % 2 != 0)
    {
        return temp[len / 2];
    }
    else
    {
        int mid = len / 2;
        return (temp[mid] + temp[mid - 1]) / 2.0; // float/float = float. but float/int = int, remember!
    }
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {5, 15, 25, 35, 45};
    int m = sizeof(b) / sizeof(b[0]);

    float median = fun(a, n, b, m);
    cout << median;
    return 0;
}