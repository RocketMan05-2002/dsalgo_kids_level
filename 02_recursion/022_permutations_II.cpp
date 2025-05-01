// an efficient approach

#include <bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &nums, vector<vector<int>> &ans)
{

    if (ind == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        fun(ind + 1, nums, ans);
        swap(nums[ind], nums[i]);
    }
}
vector<vector<int>> permutations(vector<int> &nums)
{
    vector<vector<int>> ans;
    fun(0, nums, ans);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = permutations(nums);
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}