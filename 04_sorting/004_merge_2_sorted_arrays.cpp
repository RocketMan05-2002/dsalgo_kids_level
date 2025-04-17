#include <bits/stdc++.h>
using namespace std;
vector<int> merger(int a[], int n, int b[], int m)
{
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
    return temp;
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {5, 15, 25, 35, 45};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    vector<int> ans = merger(a, n, b, m);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}