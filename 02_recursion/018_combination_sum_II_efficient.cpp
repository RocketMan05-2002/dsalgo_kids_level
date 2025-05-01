#include <bits/stdc++.h>
using namespace std;
void fun(int ind, int target, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i - 1] == arr[i])
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[i]);
        fun(i + 1, target - arr[i], ds, arr, ans);
        ds.pop_back();
    }
}
vector<vector<int>> findCombos(vector<int> &vec, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    fun(0, target, ds, vec, ans);
    return ans;
}
int main()
{
    vector<int> vec = {1, 1, 1, 2, 2};
    int target = 4;
    vector<vector<int>> ans = findCombos(vec, target);
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}