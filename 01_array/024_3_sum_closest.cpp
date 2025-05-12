int closest3Sum(vector<int> &arr, int target)
{
    // code here
    // sort the array
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int closestSum = INT_MAX;
    int minDiff = INT_MAX;

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            int diff = abs(sum - target);

            if (diff < minDiff || (diff == minDiff && sum > closestSum))
            {
                closestSum = sum;
                minDiff = diff;
            }

            if (sum < target)
                left++;
            else
                right--;
        }
    }

    return closestSum;
}