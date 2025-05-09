// useful when theres not much disparity among the array elements
// TC = O(n+k). K = maximum element.
// if k is of order of n then theres no probs
// TC = O(n), in that case.
// SC = O(maxi), frequency array of size of maximum element

#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &arr)
{
	int n = arr.size();
	// 1. find maximum element
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		maxi = max(maxi, arr[i]);
	}
	// 2. frequency array
	vector<int> freq(maxi + 1, 0);
	for (int i = 0; i < n; i++)
		freq[arr[i]]++;

	// 3. cumulative frequency
	for (int i = 1; i <= maxi; i++)
	{
		freq[i] += freq[i - 1];
	}

	// 4. calculate the sorted array
	vector<int> ans(n);
	for (int i = n - 1; i >= 0; i--)
	{
		ans[--freq[arr[i]]] = arr[i];
	}

	// 5. ans -> arr
	for (int i = 0; i < n; i++)
	{
		arr[i] = ans[i];
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	countSort(a);
	for (auto it : a)
		cout << it << " ";
	return 0;
}